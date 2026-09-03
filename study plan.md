| **阶段**                         | **周次**   | **学习主题 / 领域**        | **核心学习内容与知识点**                                     | **每周实战交付物**                                          |
| -------------------------------- | ---------- | -------------------------- | ------------------------------------------------------------ | ----------------------------------------------------------- |
| 第一阶段：巩固基本盘& 底层深水区 | **W1**     | **C++ 基础与 JNI 机制**    | C++ 语法、指针/智能指针、CMake 配置、JNI 引用类型与跨线程调用 | 写一个 C++ 通过 JNI 实现字符串/数组加密的 Demo              |
|                                  | **W2**     | **NDK 进阶实战**           | NDK 内存管理、C++ 异常处理、Bitmap 位图操作、JNI 异常捕捉    | 基于 C++/NDK 手写高保真图片压缩/滤镜库                      |
|                                  | **W3**     | **Handler 消息机制**       | 追查 Looper, MessageQueue, Handler, ThreadLocal 源码；同步屏障与 IdleHandler | 手写纯 Java/Kotlin 版 Handler 消息队列，模拟主线程渲染      |
|                                  | **W4**     | **Binder IPC 机制**        | AIDL 代码生成原理、Binder 驱动核心原理、mmap 内存映射、SystemServer | 绘制 Binder 通信时序图，编写无 AIDL 的手动 Binder 通信 Demo |
|                                  | **W5**     | **AMS & Activity 启动**    | startActivity 全链路、ActivityThread、Window/DecorView/ViewRootImpl | 用思维导图梳理点击图标到首帧渲染的完整 Framework 调用链     |
|                                  | **W6**     | **性能调优：内存与卡顿**   | MAT 分析 Heap Dump；Perfetto / Systrace 工具；卡顿监控（Looper/Choreographer） | 用 Perfetto 捕捉一次 App 卡顿，输出一份性能分析报告         |
|                                  | **W7**     | **性能调优：启动与包体积** | 启动优化（异步初始化、App Startup）、R8/ProGuard 混淆、APK 瘦身/So 库剥离 | 制作自动化检测 App 内存泄漏与卡顿的组件库，发布至 GitHub    |
|                                  | **W8**     | **阶段性复盘**             | 复习前 7 周内容，整理个人技术博客与 GitHub 仓库              | 在 GitHub 开源个人底层与性能优化项目（含高质量 README）     |
| 第二阶段：社交业务纵深& 现代架构 | **W9**     | **Compose 声明式 UI**      | Compose 状态管理与 Recomposition 优化、Layout 自定义、Modifier 链式调用 | 用 Compose 1:1 还原复杂社交聊天气泡与富文本列表             |
|                                  | **W10**    | **MVI 架构与协程 Flow**    | Kotlin 协程挂起原理、Flow 操作符与背压、MVI 单向数据流架构   | 使用 Compose + MVI + Clean Architecture 重构一个业务模块    |
|                                  | **W11**    | **网络与长连接优化**       | HTTP/3 (QUIC) 协议、WebSocket 保活机制/断线重连/心跳包、Protobuf 序列化 | 基于 WebSocket + Protobuf 搭建支持离线重发的轻量 IM 客户端  |
|                                  | **W12**    | **RTC 音视频基础**         | 音视频编解码基础（H.264/AAC）、FFmpeg 交叉编译与基础 API 调用 | 用 FFmpeg 实现本地音视频文件的解封装与音频播放              |
|                                  | **W13**    | **WebRTC 实战**            | WebRTC 架构、信令服务器搭建、ICE/STUN/TURN 穿透、网络抗抖动（FEC/NACK） | 基于开源 WebRTC 搭建双人实时视频通话应用 Demo               |
|                                  | **W14**    | **数据库与本地存储**       | Room 高阶用法、数据库加密（SQLCipher）、MMKV 高性能 KV 存储原理（mmap） | 实现高并发下不丢数据的本地聊天历史记录缓存引擎              |
|                                  | **W15**    | **组件化与 Gradle 插件**   | ARouter 路由原理、组件化模块隔离设计、Gradle 自定义 Plugin 开发 | 手写 Gradle 插件，实现在编译期自动插桩计算方法耗时          |
|                                  | **W16**    | **阶段性项目总结**         | 整合 W9-W15 成果，完成结构清晰的社交全栈客户端 Demo          | 在 GitHub 上架开源社交/RTC Demo，并撰写架构设计文档         |
| 第三阶段：行业转型专项           | **W17-18** | **端侧 AI**                | ONNX Runtime / TFLite 移动端部署，模型量化（INT8/FP16）      | 在 App 中集成 ONNX Runtime 实现本地模型推理                 |
|                                  | **W19-20** | **端侧 AI**                | SSE / WebSocket 流式输出解析，流式打字机效果 UI 渲染         | 实现流式响应的大模型对话界面（完美重绘控制）                |
|                                  | **W21-22** | **端侧 AI**                | 端侧轻量级大模型/视觉模型 NDK 原生集成                       | 完成一个完全离线运行的图像识别或小语言模型 App              |
|                                  | **W23-24** | **端侧 AI**                | 结合 RAG（检索增强生成）或本地向量数据库（ObjectBox Vector） | 打造并开源一个离线私人 AI 助手 App                          |

| 阶段                                      | 周次    | 学习主题 / 领域                           | 核心学习内容与知识点                                         | 每周实战交付物                                               |
| ----------------------------------------- | ------- | ----------------------------------------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| **第一阶段：Android 基础盘 & 底层深水区** | **W1**  | **C++ 基础与 JNI 机制**                   | C++ 语法、指针/引用、RAII、智能指针、CMake、JNI 基本类型/引用类型、JNI 跨线程调用 | C++ 通过 JNI 实现字符串/数组加密 Demo                        |
|                                           | **W2**  | **NDK 进阶实战**                          | NDK 内存管理、C++ 异常、JNI 异常捕获、Bitmap/像素操作、Native 生命周期 | 基于 C++/NDK 实现图片压缩/滤镜库                             |
|                                           | **W3**  | **Handler 消息机制**                      | Looper、MessageQueue、Handler、ThreadLocal、同步屏障、IdleHandler、Message 回收机制 | 手写纯 Kotlin/Java 版 Handler 消息队列，模拟主线程消息循环   |
|                                           | **W4**  | **Binder IPC 机制**                       | AIDL 生成原理、Binder Driver、mmap、Parcel、ServiceManager、SystemServer、线程池 | 绘制 Binder 通信时序图，完成手动 Binder IPC Demo             |
|                                           | **W5**  | **AMS & Activity 启动**                   | startActivity 全链路、ActivityTaskManager、ActivityThread、Instrumentation、Window、DecorView、ViewRootImpl | 梳理“点击桌面图标 → Activity → 首帧”的完整调用链             |
|                                           | **W6**  | **性能调优：内存与卡顿**                  | Heap Dump、MAT、LeakCanary、Perfetto、Systrace、Looper/Choreographer 卡顿监控、FrameTimeline | 使用 Perfetto 捕捉一次真实卡顿并输出性能分析报告             |
|                                           | **W7**  | **性能调优：启动与包体积**                | 冷/温启动、App Startup、异步初始化、R8/ProGuard、APK/DEX/资源/So 瘦身、Baseline Profile | 制作启动/包体积优化 Demo，并进行优化前后 Benchmark           |
|                                           | **W8**  | **阶段复盘 & 工程化**                     | 总结 Android Framework、Native、性能优化；整理源码阅读方法、Benchmark 方法、GitHub README | 整理 GitHub 底层/性能项目 + 技术文章 + 知识体系图            |
| **第二阶段：现代 Android & AI 基础**      | **W9**  | **Compose 声明式 UI**                     | State、Snapshot、Recomposition、Remember、Side Effect、Layout、Modifier、性能优化 | Compose 1:1 还原复杂聊天气泡与富文本列表                     |
|                                           | **W10** | **MVI / Coroutine / Flow**                | Coroutine 挂起原理、Structured Concurrency、Flow、StateFlow、SharedFlow、背压、MVI、单向数据流 | Compose + MVI + Clean Architecture 重构一个业务模块          |
|                                           | **W11** | **LLM 基础** ⭐新增                        | Token、Tokenizer、Embedding、Transformer、Attention、Context Window、Inference、Temperature、Sampling | 做一个最简单的 Android AI Chat，支持基本对话                 |
|                                           | **W12** | **LLM API & Streaming** ⭐新增             | REST API、SSE、WebSocket、Streaming、Token 增量解析、超时/重试、错误处理、Token Usage、Structured Output | 实现流式 AI Chat，支持打字机效果、取消生成、异常恢复         |
|                                           | **W13** | **RAG** ⭐新增                             | Document、Chunking、Embedding、Vector DB、Similarity Search、Top-K、Context Construction、RAG Pipeline | 制作 Android 技术文档 AI Assistant                           |
|                                           | **W14** | **Function Calling / Tool Calling** ⭐新增 | JSON Schema、Tool Definition、Tool Call、Tool Result、循环调用、工具错误处理 | 制作 Android APK AI Analyzer：AI 自动读取 APK/Manifest/依赖等信息 |
|                                           | **W15** | **AI Agent** ⭐新增                        | Agent Loop、Planning、Tool、Memory、Observation、Reflection、Context Management | 制作 Android Crash Analysis Agent：输入 Crash → 搜索 → 分析 → 输出修复建议 |
|                                           | **W16** | **MCP & AI Coding** ⭐新增                 | MCP、Tools/Resources/Prompts、Context Engineering、Repository Context、Spec、Agent Rules、AI Coding Workflow | 实现 Android MCP Server：代码搜索、Crash 查询、Gradle Build、Test 等工具 |
| **第三阶段：Android AI & On-device AI**   | **W17** | **AI Inference 基础**                     | Training vs Inference、Model Graph、Tensor、Operator、Latency、Throughput、Memory、CPU/GPU/NPU | 在 Android 中运行一个简单视觉/文本模型并完成 Benchmark       |
|                                           | **W18** | **ONNX Runtime / LiteRT**                 | ONNX、Model Graph、Runtime、Tensor、Operator、Android 集成、NNAPI/硬件 Delegate 基础 | Android 集成 ONNX Runtime 或 LiteRT 完成本地模型推理         |
|                                           | **W19** | **模型量化**                              | FP32、FP16、INT8、INT4、Quantization、Accuracy/Latency/Memory Trade-off | 同一模型完成 FP32/FP16/INT8 对比 Benchmark                   |
|                                           | **W20** | **NDK + AI Runtime**                      | JNI、C++、CMake、ABI、.so、Native Inference、JNI 数据传输、Native 内存管理 | Kotlin → JNI → C++ → AI Runtime 完成本地推理链路             |
|                                           | **W21** | **On-device Vision AI**                   | Image Classification/Object Detection、Camera Pipeline、Bitmap/YUV、预处理/后处理、GPU/NPU Delegate | 实现完全离线的实时图像识别 App                               |
|                                           | **W22** | **On-device LLM**                         | 小型 LLM、Tokenizer、Prefill、Decode、KV Cache、Context Length、Token Generation、内存优化 | Android 完全离线运行小型语言模型，实现本地 Chat              |
|                                           | **W23** | **Local RAG / Offline AI**                | 本地 Embedding、本地 Vector DB、Hybrid Retrieval、Local LLM、Offline RAG、数据持久化 | 打造完全离线的私人 AI 助手                                   |
|                                           | **W24** | **最终项目 & 技术总结**                   | Android + Agent + MCP + RAG + On-device AI + NDK + 性能优化整合 | 开源完整 **On-device AI Android Assistant**，完成架构文档、Benchmark、README |