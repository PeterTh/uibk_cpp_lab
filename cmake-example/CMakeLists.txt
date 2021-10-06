# Ideally you want to require the lowest CMake version possible for your
# project. But you have to test that manually, so just go with what you are
# currently using and adjust as you go.
cmake_minimum_required(VERSION 3.16)

# The name of the core library is used as project name.
project(mylib
  VERSION 0.1.0
  DESCRIPTION "An example CMake project"
  LANGUAGES CXX)

# This allows us to include CMake modules located in `./cmake`.
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

# Note that we do not set *any* global properties here!

# A dedicated function is used for setting common compile flags and properties.
include(compile_flags)

# Catch2 is used for testing. We bring along the single header version.
add_subdirectory(vendor/Catch2)

# We start off by declaring our main library.
add_library(mylib src/foo.cpp)
mylib_cxx_flags(mylib)
target_include_directories(mylib PUBLIC include)

# Followed by the executable using the library. Targets get prefixed with the
# project name in order to avoid conflicts. We can still adjust the actual
# output name for the executable.
add_executable(mylib_myapp apps/myapp.cpp)
mylib_cxx_flags(mylib_myapp)
set_target_properties(mylib_myapp PROPERTIES OUTPUT_NAME myapp)
target_link_libraries(mylib_myapp PRIVATE mylib)

# We also declare a test runner, again targets are prefixed with the project
# name.
enable_testing()
add_executable(mylib_test_runner tests/test_runner.cpp tests/foo_test.cpp)
mylib_cxx_flags(mylib_test_runner)
target_link_libraries(mylib_test_runner PRIVATE mylib mylib_Catch2)
add_test(NAME mylib_test_runner COMMAND $<TARGET_FILE:mylib_test_runner>)
