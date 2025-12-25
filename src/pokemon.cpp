#include "pokemon.hpp"
#include "auxfunctions.hpp" 
Pokemon::Pokemon(std::string name, std::vector<Type> type, int pokedex_number) 
    : name(name), types(type), pokedex_number(pokedex_number) {}

Pokemon::Pokemon()
    : name(""), types({Type::Normal}), pokedex_number(0) {}

std::string Pokemon::getname() const {
    return this->name;
}

std::vector<Type> Pokemon::gettype() const {
    return this->types;
}

int Pokemon::getnumber() const {
    return this->pokedex_number;
}

void Pokemon::print() {
    std::cout << "#" << this->pokedex_number << " - " << this->name;
    std::cout << " (";
    for (int i(0); i < (int)this->types.size(); i++) {
        std::cout << typetostring(this->types[i]);
        if (i != (int)this->types.size()-1) std::cout << ", ";
    }
    std::cout << ")" << std::endl;
}
