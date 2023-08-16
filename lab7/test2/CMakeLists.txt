cmake_minimum_required(VERSION 3.15)
project(test1)

include_directories(${HEAD_PATH})
aux_source_directory(./ SRC)

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
add_executable(${APP_NAME_2} ${SRC})

link_directories(${LIB_PATH})
target_link_libraries(${APP_NAME_2} ${SORT_LIB})
