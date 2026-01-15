enable_testing()

add_executable(
    pokedb_tests
    test_pokemon.cpp
    test_pokeDB.cpp
    test_pokemontype.cpp
)

target_link_libraries(
    pokedb_tests
    gtest_main
    pokedb_lib
)

configure_file(
    ${PROJECT_SOURCE_DIR}/tests/test_data.csv
    ${PROJECT_BINARY_DIR}/tests/test_data.csv
    COPYONLY
)

target_compile_definitions(
    pokedb_tests
    PRIVATE
        TEST_DATA_DIR="${CMAKE_CURRENT_BINARY_DIR}"
)

include(GoogleTest)
gtest_discover_tests(pokedb_tests)
