cmake_minimum_required(VERSION 3.16)

project(poke_db
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

find_package(Threads REQUIRED)

add_library(pokedb_lib
    src/pokemontype.cpp
    src/pokemon.cpp
    src/pokeDB.cpp
    src/pokeapp.cpp
)

target_include_directories(pokedb_lib PUBLIC include)
target_compile_options(pokedb_lib PRIVATE -Wall -Wextra -Wpedantic)

add_executable(poke_db src/main.cpp)
target_link_libraries(poke_db PRIVATE pokedb_lib Threads::Threads)

add_subdirectory(tests)

file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/data)

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/data/pokemon_1.csv
    ${CMAKE_CURRENT_BINARY_DIR}/data/pokemon_1.csv
    COPYONLY
)
