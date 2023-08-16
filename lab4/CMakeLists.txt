cmake_minimum_required(VERSION 3.0)
project(lab4)

# 指定源文件或者动态库对应的头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 搜索 src 目录下的源文件
# aux_source_directory(${PROJECT_SOURCE_DIR}/src/ SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# 指定要链接的动态库的路径
link_directories(${PROJECT_SOURCE_DIR}/lib)

# 添加并生成一个可执行程序
add_executable(app ${SRC})

# 指定要链接的动态库（也可以链接静态库，同时存在时优先链接动态库）
target_link_libraries(app calc)
