#include<iostream>
#include "auxfunctions.hpp"

Type stringtotype(std::string type) {
    if (type == "fire") return Type::Fire;
    if (type == "water") return Type::Water;
    if (type == "normal") return Type::Normal;
    if (type == "grass") return Type::Grass;
    if (type == "electric") return Type::Eletric;
    if (type == "poison") return Type::Poison;
    if (type == "flying") return Type::Flying;
    if (type == "bug") return Type::Bug;
    if (type == "ground") return Type::Ground;
    if (type == "fairy") return Type::Fairy;
    if (type == "fighting") return Type::Fighting;
    if (type == "psychic") return Type::Psychic;
    if (type == "rock") return Type::Rock;
    if (type == "ice") return Type::Ice;
    if (type == "ghost") return Type::Ghost;
    if (type == "dragon") return Type::Dragon;
}

std::string typetostring(Type type) {
    switch (type) {
        case Type::Fire: return "Fire";
        case Type::Water: return "Water";
        case Type::Normal: return "Normal";
        case Type::Grass: return "Grass";
        case Type::Eletric: return "Electric";
        case Type::Poison: return "Poison";
        case Type::Flying: return "Flying";
        case Type::Bug: return "Bug";
        case Type::Ground: return "Ground";
        case Type::Fairy: return "Fairy";
        case Type::Fighting: return "Fighting";
        case Type::Psychic: return "Psychic";
        case Type::Rock: return "Rock";
        case Type::Ice: return "Ice";
        case Type::Ghost: return "Ghost";
        case Type::Dragon: return "Dragon";
    }
}