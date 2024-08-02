cmake_minimum_required(VERSION 3.22)
project(process)

# 创建库
add_library(process SHARED print_double_hello.cpp)

# 链接 driver 库
target_link_libraries(process PRIVATE driver)

# 设置包括目录
target_include_directories(process PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(process PRIVATE ${CMAKE_BINARY_DIR}/output/include)

# 安装库和头文件
install(TARGETS process
    LIBRARY DESTINATION lib
)
install(FILES print_double_hello.h DESTINATION include)

