# 1. 这是一个CMAKE的简单模板：用CMAKE构建项目

🤡模板的结构如下：
```
├── build
├── CMakeLists.txt
├── config
├── doc
├── logs
├── output
│   ├── bin
│   │   └── ui
│   ├── include
│   │   ├── print_double_hello.h
│   │   ├── print_forth_hello.h
│   │   └── printhello.h
│   └── lib
│       ├── libdriver.so
│       └── libprocess.so
├── readme.md
├── run.sh
├── src
│   ├── driver
│   │   ├── CMakeLists.txt
│   │   ├── printhello.cpp
│   │   └── printhello.h
│   ├── process
│   │   ├── CMakeLists.txt
│   │   ├── print_double_hello.cpp
│   │   └── print_double_hello.h
│   └── ui
│       ├── CMakeLists.txt
│       ├── print_forth_hello.cpp
│       └── print_forth_hello.h
└── third_party
        ├── include
        └── lib
```
---
😫🤺通常来说，项目中的文件夹代表如下含义
1. build：cmake构建的临时目录
2. config：一些配置文件，例如：算法配置文件...
3. doc：一些手册、说明书...
4. logs：日志文件
5. output：安装目录
6. run.sh：启动项目的脚本
7. src：源码
8. third_party：第三方SDK
---

# 2. 模板的使用方法，在终端执行👇
😚
```
sh ./run.sh
```

# 3. 等待完善的问题
1. 🤡make install后执行oputput/bin/ui会报错：
```
libprocess.so: cannot open shared object file: No such file or directory
```
临时解决办法：
```
export LD_LIBRARY_PATH=../output/lib:$LD_LIBRARY_PATH
```
2. 还没实现：make uninstall
3. 还没实现导出：.cmake配置文件
