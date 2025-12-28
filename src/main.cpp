#include "pokemon.hpp"
#include "auxfunctions.hpp"
#include "pokemontype.hpp"
#include <iostream>
#include <vector> 
#include <string>
int main() {
    Pokemon current("Charizard", {PokemonType::Fire, PokemonType::Flying}, 4);
    current.print();
    stringtotype("FIRE");
    return 0;
}