cmake_minimum_required(VERSION 3.0)
project(lab3)

# 包含头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 搜索 src 目录下的源文件
# aux_source_directory(${PROJECT_SOURCE_DIR}/src/ SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# 包含静态库路径
link_directories(${PROJECT_SOURCE_DIR}/lib)
# 链接静态库
link_libraries(calc)

add_executable(app ${SRC})
