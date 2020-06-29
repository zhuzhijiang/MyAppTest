cmake_minimum_required(VERSION 3.4.1)

SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/libs)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/libs)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/libs/${ANDROID_ABI})

FILE(GLOB_RECURSE srcList "*.cpp")
add_library( # Sets the name of the library.
        native-lib
        # Sets the library as a shared library.
        SHARED
        # Provides a relative path to your source file(s).
        ${srcList} )

find_library( # Defines the name of the path variable that stores the
        # location of the NDK library.
        log-lib

        # Specifies the name of the NDK library that
        # CMake needs to locate.
        log )


target_link_libraries( # Specifies the target library.
        native-lib

        # Links the log library to the target library.
        ${log-lib} )