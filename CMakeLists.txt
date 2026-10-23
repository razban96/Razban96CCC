cmake_minimum_required(VERSION 4.3)
project(Razban96CCC)

set(CMAKE_CXX_STANDARD 17)

add_executable(Razban96CCC Classic42.cpp)

target_compile_definitions(Razban96CCC PRIVATE
        COMP_PROG_ROOT="${CMAKE_CURRENT_SOURCE_DIR}"
)
