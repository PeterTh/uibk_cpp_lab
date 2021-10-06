cmake_minimum_required(VERSION 3.16)
project(little_features CXX)

file(GLOB srcs *.cpp)
foreach(src IN LISTS srcs)
  get_filename_component(exe ${src} NAME_WE)
  add_executable(${exe} ${src})
  target_compile_features(${exe} PRIVATE cxx_std_17)
  set_target_properties(${exe} PROPERTIES CXX_EXTENSIONS OFF)
  target_compile_options(${exe} PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang,AppleClang>:-Wall -Wextra -pedantic>)
  target_link_libraries(${exe} -ltbb)
endforeach()
