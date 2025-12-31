#include "pokemon.hpp"
#include "pokemontype.hpp"
#include "pokeDB.hpp"
#include <iostream>
#include <vector> 
#include <string>

int main() {
    PokeDB aux = PokeDB();
    aux.listall();
    aux.searchByName("Mewtwo").print();
    return 0;
}