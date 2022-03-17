cmake_minimum_required(VERSION 3.10)

project(
    DynamicShadows
    VERSION 1.0.0
    )

# Compiled source code
add_subdirectory(src)

# Executable
add_subdirectory(apps)

configure_file(
    "${PROJECT_SOURCE_DIR}/include/version_config.h.in"
    "${PROJECT_BINARY_DIR}/include/version_config.h"
)

target_include_directories(
    Main PUBLIC
    "${PROJECT_SOURCE_DIR}/include/"
    "${PROJECT_BINARY_DIR}/include/"
)