#include <gtest/gtest.h>
#include "pokeDB.hpp"
#include <string>
#include <vector>

TEST(PokeDBTest, CsvLoadTest) {
    std::string path = "tests/test_data.csv";
    PokeDB db(path);
    ASSERT_EQ(db.sizedb(), 5);
}

TEST(PokeDBTest, SearchTest) {
    std::string path = "tests/test_data.csv";
    PokeDB db(path);
    EXPECT_EQ(db.searchByName("Charmander").getname(), "Charmander");
    EXPECT_EQ(db.searchByName("Charmander").gettype(), std::vector<PokemonType>{PokemonType::Fire});
    EXPECT_EQ(db.searchByName("Charmander").getnumber(), 4);
    EXPECT_THROW(
        db.searchByName("Rengar"),
        std::invalid_argument
    );
}

TEST(PokeDBTest, ContainsNumberTest) {
    std::string path = "tests/test_data.csv";
    PokeDB db(path);
    EXPECT_EQ(db.containsNumber(-1), false);
    EXPECT_EQ(db.containsNumber(6), false);
    EXPECT_EQ(db.containsNumber(3), true);
}