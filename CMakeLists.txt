cmake_minimum_required(VERSION 3.10)
project(MySimpleFMU C)

# Set output folder for FMU binary
set(BINARY_OUTPUT_DIR ${CMAKE_SOURCE_DIR}/binaries)

# Create platform-specific subfolder
if(WIN32)
    set(PLATFORM_DIR ${BINARY_OUTPUT_DIR}/win64)
elseif(APPLE)
    set(PLATFORM_DIR ${BINARY_OUTPUT_DIR}/darwin64)
else()
    set(PLATFORM_DIR ${BINARY_OUTPUT_DIR}/linux64)
endif()

# Create output directory if it doesn't exist
file(MAKE_DIRECTORY ${PLATFORM_DIR})

# Add FMI headers
include_directories(${CMAKE_SOURCE_DIR}/fmi2)

# Add your source code
add_library(MySimpleFMU SHARED sources/MySimpleFMU.c)
add_definitions(-DFMI2_FUNCTION_PREFIX=FMI2_Export)

# Set output directory and filename
set_target_properties(MySimpleFMU PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${PLATFORM_DIR}
    LIBRARY_OUTPUT_DIRECTORY ${PLATFORM_DIR}
    ARCHIVE_OUTPUT_DIRECTORY ${PLATFORM_DIR}
    PREFIX ""  # No "lib" prefix
    OUTPUT_NAME "MySimpleFMU"
    WINDOWS_EXPORT_ALL_SYMBOLS ON
)
