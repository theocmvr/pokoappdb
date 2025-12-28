#include "pokemontype.hpp"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <stdexcept>
#include <string>

PokemonType stringtotype(std::string type) {
    std::transform(type.begin(), type.end(), type.begin(), [](unsigned char c) { return std::tolower(c);});
    if (type == "fire") {
        return PokemonType::Fire;
    }
    else if (type == "water") {
        return PokemonType::Water;
    }
    else if (type == "normal") {
        return PokemonType::Normal;
    }
    else if (type == "grass") {
        return PokemonType::Grass;
    }
    else if (type == "electric") {
        return PokemonType::Eletric;
    }
    else if (type == "poison") {
        return PokemonType::Poison;
    }
    else if (type == "flying") {
        return PokemonType::Flying;
    }
    else if (type == "bug") {
        return PokemonType::Bug;
    }
    else if (type == "ground") {
        return PokemonType::Ground;
    }
    else if (type == "fairy") {
        return PokemonType::Fairy;
    }
    else if (type == "fighting") {
        return PokemonType::Fighting;
    }
    else if (type == "psychic") {
        return PokemonType::Psychic;
    }
    else if (type == "rock") {
        return PokemonType::Rock;
    }
    else if (type == "ice") {
        return PokemonType::Ice;
    }
    else if (type == "ghost") {
        return PokemonType::Ghost;
    }
    else if (type == "dragon") {
        return PokemonType::Dragon;
    }
    else {
        throw std::invalid_argument("Type doesn't exist");
    }
}

std::string typetostring(PokemonType type) {
    switch (type) {
        case PokemonType::Fire: return "Fire";
        case PokemonType::Water: return "Water";
        case PokemonType::Normal: return "Normal";
        case PokemonType::Grass: return "Grass";
        case PokemonType::Eletric: return "Electric";
        case PokemonType::Poison: return "Poison";
        case PokemonType::Flying: return "Flying";
        case PokemonType::Bug: return "Bug";
        case PokemonType::Ground: return "Ground";
        case PokemonType::Fairy: return "Fairy";
        case PokemonType::Fighting: return "Fighting";
        case PokemonType::Psychic: return "Psychic";
        case PokemonType::Rock: return "Rock";
        case PokemonType::Ice: return "Ice";
        case PokemonType::Ghost: return "Ghost";
        case PokemonType::Dragon: return "Dragon";
        default: return "Normal";
    }
}