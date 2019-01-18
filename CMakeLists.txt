cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 14)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(HunterGate)

HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.23.89.tar.gz"
    SHA1 "a370290a8b32987755a36d64807bf8c7f5b61730"
)

project(pattern-demo)

add_subdirectory(decorate)
