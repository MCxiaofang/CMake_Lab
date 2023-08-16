cmake_minimum_required(VERSION 3.15)
project(test1)

include_directories(${HEAD_PATH})
aux_source_directory(./ SRC)

link_directories(${LIB_PATH})
link_libraries(${CALC_LIB})

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
add_executable(${APP_NAME_1} ${SRC})
