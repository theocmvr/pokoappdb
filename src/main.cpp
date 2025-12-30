#include "pokemon.hpp"
#include "pokemontype.hpp"
#include "pokeDB.hpp"
#include <iostream>
#include <vector> 
#include <string>

int main() {
    PokeDB aux;
    Pokemon first("Charizard", {PokemonType::Fire, PokemonType::Flying}, 6);
    Pokemon second("Squirtle", {PokemonType::Water}, 7);
    aux.add(first);
    aux.add(second);
    aux.listall();
    (aux.searchByName("Squirtle")).print();
    try {
        aux.searchByName("Theo");
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}