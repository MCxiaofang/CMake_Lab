cmake_minimum_required(VERSION 3.15)
project(sort)

include_directories(${HEAD_PATH})
aux_source_directory(./ SRC)
set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

link_directories(${LIB_PATH})
link_libraries(${CALC_LIB})

add_library(${SORT_LIB} STATIC ${SRC})