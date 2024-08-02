cmake_minimum_required(VERSION 3.22)
project(printhello_project)

# 设置输出目录，就是make的时候输出的目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output/bin)

# 添加子目录，这里的添加顺序决定了子目录的编译顺序！！！
add_subdirectory(src/driver)
add_subdirectory(src/process)
add_subdirectory(src/ui)

# 设置安装目录，就是make install的时候输出的目录
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/output)

