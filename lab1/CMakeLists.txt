cmake_minimum_required(VERSION 3.0)
project(lab1)

include_directories(${PROJECT_SOURCE_DIR}/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/ SRC)

add_executable(app ${SRC})