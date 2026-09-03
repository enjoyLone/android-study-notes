#include <jni.h>
#include <string>
#include <cstring>
#include <android/log.h>

#define LOG_TAG "JNI_CRYPTO"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)


// 算法实现：异或（XOR）加解密
jbyteArray processXOR(JNIEnv *env, jclass clazz, jbyteArray data_, jstring key_) {
    if (data_ == nullptr || key_ == nullptr) return nullptr;

    jsize dataLen = env->GetArrayLength(data_);
    jbyte *data = env->GetByteArrayElements(data_, nullptr);
    const char *key = env->GetStringUTFChars(key_, nullptr);
    jsize keyLen = env->GetStringUTFLength(key_);

    if (data == nullptr || key == nullptr) {
        if (data) env->ReleaseByteArrayElements(data_, data, JNI_ABORT);
        if (key) env->ReleaseStringUTFChars(key_, key);
        return nullptr;
    }

    auto *resultBuf = new jbyte[dataLen];
    for (int i = 0; i < dataLen; ++i) {
        resultBuf[i] = data[i] ^ key[i % keyLen];
    }

    jbyteArray result = env->NewByteArray(dataLen);
    env->SetByteArrayRegion(result, 0, dataLen, resultBuf);

    // 内存显式释放防泄漏
    delete[] resultBuf;
    env->ReleaseByteArrayElements(data_, data, JNI_ABORT);
    env->ReleaseStringUTFChars(key_, key);

    return result;
}

extern "C" JNIEXPORT jstring JNICALL
stringFromJNI(JNIEnv *env, jclass clazz) {
    std::string hello = "Hello from C++!";
    // 将 C++ std::string 转换为 Java/Kotlin 识别的 jstring 并返回
    return env->NewStringUTF(hello.c_str());
}

jstring Java_NativeCTest_CryptoKey_add(JNIEnv *env, jclass clazz, jint a, jint b) {
    int result = a + b;
    std::string str = std::to_string(result);
    return env->NewStringUTF(str.c_str());
}

// JNI 动态注册映射表
static const JNINativeMethod gMethods[] = {
        {"encryptXOR",    "([BLjava/lang/String;)[B", (void *) processXOR},
        {"decryptXOR",    "([BLjava/lang/String;)[B", (void *) processXOR},
        {"stringFromJNI", "()Ljava/lang/String;",     (void *) stringFromJNI},
        {"add",           "(II)Ljava/lang/String;",    (void *) Java_NativeCTest_CryptoKey_add}
};

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env = nullptr;
    if (vm->GetEnv((void **) &env, JNI_VERSION_1_6) != JNI_OK) return JNI_ERR;

    jclass clazz = env->FindClass("com/example/nativectest/CryptoUtils");
    if (clazz == nullptr) return JNI_ERR;

    if (env->RegisterNatives(clazz, gMethods, sizeof(gMethods) / sizeof(gMethods[0])) < 0) {
        return JNI_ERR;
    }

    LOGI("JNI_OnLoad: Dynamic registration successful!");
    return JNI_VERSION_1_6;
}