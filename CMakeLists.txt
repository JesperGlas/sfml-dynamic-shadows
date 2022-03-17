cmake_minimum_required(VERSION 3.10)

project(
    sfml-dynamic_shadows
    VERSION 1.0.0
    )

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")


aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}/src" PROJECT_SRCS)

# Add project include directories
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src")

# Add SFML
message(STATUS "Adding SFML dir")
set (SFML_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/SFML-2.5.1")
find_package(SFML 2.5.1 COMPONENTS system graphics REQUIRED)

# Create build files for application
add_executable(${PROJECT_NAME} ${PROJECT_SRCS})

# Link against libraries
target_link_libraries(${PROJECT_NAME} 
    sfml-system
    sfml-graphics
    )