cmake_minimum_required(VERSION 3.10)

project(
    sfml-dynamic_shadows
    VERSION 1.0.0
    )

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}/src" PROJECT_SRCS)

# Add project include directories
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src")

# Define variable for linked libraries
set(PROJECT_LIBRARIES)

# Create build files for application
add_executable(${PROJECT_NAME} ${PROJECT_SRCS})

# Link against libraries
target_link_libraries(${PROJECT_NAME} glfw ${PROJECT_LIBRARIES} ${GLFW_LIBRARIES})

# Install application
install(TARGETS ${PROJECT_NAME} DESTINATION bin)