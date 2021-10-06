# Since we bring along our own version of Catch2, we prefix the target with the
# project name. Alternatively we could check whether Catch2::Catch2 is already
# available and use that one instead of our own via `add_library(mylib_Catch2
# ALIAS Catch2::Catch2)`.

add_library(mylib_Catch2 INTERFACE)
target_include_directories(mylib_Catch2 INTERFACE .)
