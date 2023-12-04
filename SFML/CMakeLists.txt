cmake_minimum_required(VERSION 3.0)

project(SFML)

# Find the SFML library
find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

# Set the source files
set(SOURCE_FILES
        main.cpp

        # Add more source files as needed
)

# Create the executable
add_executable(SFML ${SOURCE_FILES})

# Link the SFML libraries
target_link_libraries(SFML sfml-graphics)
