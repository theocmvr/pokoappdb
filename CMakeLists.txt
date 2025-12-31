cmake_minimum_required(VERSION 3.16)

project(poke_db
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Threads REQUIRED)

add_executable(poke_db
    src/main.cpp
    src/pokemontype.cpp
    src/pokemon.cpp
    src/pokeDB.cpp
)

target_compile_options(poke_db PRIVATE -Wall -Wextra -Wpedantic)

target_link_libraries(poke_db PRIVATE Threads::Threads)

target_include_directories(poke_db
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/data)

configure_file(
    ${PROJECT_SOURCE_DIR}/data/pokemon_1.csv
    ${PROJECT_BINARY_DIR}/data/pokemon_1.csv
    COPYONLY
)