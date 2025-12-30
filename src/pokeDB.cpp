#include "pokeDB.hpp"
#include "pokemon.hpp"
#include "pokemontype.hpp"
#include <vector>
#include <iostream>
#include <stdexcept>

void PokeDB::add(const Pokemon& newPokemon) {
    pokedb.push_back(newPokemon);
}

void PokeDB::listall() const {
    for (int i(0); i < (int)pokedb.size(); i++) {
        pokedb[i].print();
    }
}

Pokemon PokeDB::searchByName(const std::string& target) const {
    int i = 0;
    std::cout << "Searching your pokemon..." << std::endl;
    while(pokedb[i].getname() != target) {
        i++;
        if (i == (int)pokedb.size()) {
            throw std::invalid_argument("Pokemon not found");
        } 
    }
    std::cout << "Pokemon found! Here is his info: ";
    return pokedb[i];
}