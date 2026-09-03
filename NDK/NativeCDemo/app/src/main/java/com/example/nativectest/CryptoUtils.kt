package com.example.nativectest

object CryptoUtils {
    init {
        // 加载生成的 libcrypto_key.so
        System.loadLibrary("crypto_key")
    }

    // 使用 external 关键字声明 Native 方法
    @JvmStatic
    external fun encryptXOR(data: ByteArray, key: String): ByteArray?

    @JvmStatic
    external fun decryptXOR(data: ByteArray, key: String): ByteArray?

    @JvmStatic
    external fun stringFromJNI(): String

    @JvmStatic
    external fun add(a: Int, b: Int): String
}