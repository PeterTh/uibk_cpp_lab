# Note that functions are also prefixed with the project name to prevent
# collisions.
function(mylib_cxx_flags target)
  # Instead of setting a specific standard directly, we use the *compile
  # features* to require (at least) C++17 standard.
  target_compile_features(${target} PRIVATE cxx_std_17)

  # Furthermore, we turn off compiler extensions.
  set_target_properties(${target} PROPERTIES CXX_EXTENSIONS OFF)

  # We enable some warnings, although only if we know the compiler actually
  # supports these flags. The `$<...>` syntax is a *generator expression*.
  target_compile_options(${target} PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang,AppleClang>:-Wall -Wextra -pedantic>)
endfunction()
