add_library(
    include-header
    header.h
    header.cpp 
)

target_include_directories("include-header" PUBLIC ./)
target_compile_definitions("include-header" PUBLIC SAY_HELLOVERSION=1)

