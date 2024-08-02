cmake_minimum_required(VERSION 3.22)
project(ui)

# 创建可执行文件
add_executable(ui print_forth_hello.cpp)

# 设置包括目录
target_include_directories(ui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(ui PRIVATE ${CMAKE_BINARY_DIR}/output/include)

# 链接 process 库
target_link_libraries(ui PRIVATE process)

# 安装头文件
install(FILES print_forth_hello.h DESTINATION include)
# 安装可执行文件
install(TARGETS ui RUNTIME DESTINATION bin)

set_target_properties(ui PROPERTIES
    INSTALL_RPATH_USE_LINK_PATH TRUE
    INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib"
)
