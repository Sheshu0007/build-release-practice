cmake_minimum_required(VERSION 3.20)
project(BuildReleasePractice VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(practice_core
    src/calculator.cpp
    src/build_info.cpp
)
target_include_directories(practice_core PUBLIC include)

add_executable(practice_app src/main.cpp)
target_link_libraries(practice_app PRIVATE practice_core)

enable_testing()
add_executable(practice_tests tests/test_main.cpp)
target_link_libraries(practice_tests PRIVATE practice_core)
add_test(NAME calculator_tests COMMAND practice_tests)

if(MSVC)
    target_compile_options(practice_core PRIVATE /W4)
    target_compile_options(practice_app PRIVATE /W4)
    target_compile_options(practice_tests PRIVATE /W4)
else()
    target_compile_options(practice_core PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(practice_app PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(practice_tests PRIVATE -Wall -Wextra -Wpedantic)
endif()
