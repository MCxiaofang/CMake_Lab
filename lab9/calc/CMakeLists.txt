cmake_minimum_required(VERSION 3.15)
project(calc)

include_directories(${HEAD_PATH})
aux_source_directory(./ SRC)
set(LIBRARY_OUTPUT_PATH ${LIB_PATH})


add_library(${CALC_LIB} SHARED ${SRC})