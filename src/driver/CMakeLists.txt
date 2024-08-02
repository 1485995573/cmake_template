cmake_minimum_required(VERSION 3.22)
project(driver)

# 创建库
add_library(driver SHARED printhello.cpp)

# 设置包括目录
target_include_directories(driver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# 安装库和头文件
install(TARGETS driver
    LIBRARY DESTINATION lib
)
install(FILES printhello.h DESTINATION include)


