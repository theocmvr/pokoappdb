#include "pokemon.hpp"
#include "auxfunctions.hpp"
#include "pokemontype.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

Pokemon::Pokemon(std::string name, std::vector<PokemonType> type, int pokedex_number) 
    : name(name), types(type), pokedex_number(pokedex_number) {

        if (name.empty() and pokedex_number <= 0) {
            throw std::invalid_argument("Name is empty and Pokedex number doesn't exist");
        } else if (name.empty()) {
            throw std::invalid_argument("Name is empty");
        } else if (pokedex_number <= 0) {
            throw std::invalid_argument("Pokedex number doesn't exist");
        }

    }

Pokemon::Pokemon()
    : name("Bulbasaur"), types({PokemonType::Grass, PokemonType::Poison}), pokedex_number(0) {}

std::string Pokemon::getname() const {
    return this->name;
}

std::vector<PokemonType> Pokemon::gettype() const {
    return this->types;
}

int Pokemon::getnumber() const {
    return this->pokedex_number;
}

void Pokemon::print() const {
    std::cout << "#" << this->pokedex_number << " - " << this->name;
    std::cout << " (";
    for (int i(0); i < (int)this->types.size(); i++) {
        std::cout << typetostring(this->types[i]);
        if (i != (int)this->types.size()-1) std::cout << ", ";
    }
    std::cout << ")" << std::endl;
}
