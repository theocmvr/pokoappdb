#include "pokemon.hpp"
#include "pokemontype.hpp"
#include "pokeDB.hpp"
#include "pokeapp.hpp"
#include <iostream>
#include <vector> 
#include <string>
#include <stdexcept>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./poke_db <csv_file>" << std::endl;
        return 1;
    }
    PokeDB db(argv[1]);
    PokeApp app(db);
    app.run();
    return 0;
}