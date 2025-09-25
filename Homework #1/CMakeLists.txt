cmake_minimum_required(VERSION 3.14)
project(VowelCounter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_library(vowel_counter STATIC src/vowel_counter.cpp)
target_include_directories(vowel_counter PUBLIC include)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE vowel_counter)

add_executable(tests test/tests01.cpp)
target_link_libraries(tests PRIVATE gtest_main vowel_counter)

enable_testing()
add_test(NAME VowelCounterTests COMMAND tests)