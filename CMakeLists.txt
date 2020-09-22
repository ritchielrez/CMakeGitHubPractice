cmake_minimum_required(VERSION 3.12)

project("CMakeProject1" VERSION 1.0)

if(UNIX AND NOT APPLE)
    set(LINUX TRUE)
elseif(UNIX AND APPLE)
    set(OSX TRUE)
endif()

# if(WIN32)
#     add_subdirectory("src" "./bin")
# elseif(LINUX)
#     add_subdirectory("src" "./bin")
# elseif(OSX)
#     add_subdirectory("src" "./bin")
# endif()

# add_executable("${PROJECT_NAME}" "./src/main.cpp")

add_subdirectory(src bin)
add_subdirectory(include lib)

# add_library(
#     include-header
#     ./include/header.h
#     ./include/header.cpp
# )

# target_link_libraries("${PROJECT_NAME}" PRIVATE include-header)
# target_include_directories("${PROJECT_NAME}" PUBLIC ./include/)

# install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
# install(FILES "./src/main.cpp" DESTINATION src)