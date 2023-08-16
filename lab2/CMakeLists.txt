cmake_minimum_required(VERSION 3.0)
project(lab2)

include_directories(${PROJECT_SOURCE_DIR}/include)

# 搜索 src 目录下的源文件
# aux_source_directory(${PROJECT_SOURCE_DIR}/src/ SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# 设置动态库/静态库生成路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 生成静态库
# add_library(calc STATIC ${SRC})
# 生成动态库
add_library(calc SHARED ${SRC})
