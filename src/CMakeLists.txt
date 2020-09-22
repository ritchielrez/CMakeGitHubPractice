add_executable("${PROJECT_NAME}" "main.cpp")

target_link_libraries("${PROJECT_NAME}" PRIVATE include-header)

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
install(FILES "./src/main.cpp" DESTINATION src)