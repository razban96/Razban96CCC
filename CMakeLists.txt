cmake_minimum_required(VERSION 4.3)
project(Razban96CCC)

set(CMAKE_CXX_STANDARD 17)

add_executable(Classic42 Classic42.cpp)

target_compile_definitions(Classic42 PRIVATE
        COMP_PROG_ROOT="${CMAKE_CURRENT_SOURCE_DIR}"
)
