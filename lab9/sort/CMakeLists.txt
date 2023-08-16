cmake_minimum_required(VERSION 3.15)
project(sort)

include_directories(${HEAD_PATH})
aux_source_directory(./ SRC)
set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

add_library(${SORT_LIB} STATIC ${SRC})

link_directories(${LIB_PATH})
target_link_libraries(${SORT_LIB} ${CALC_LIB})