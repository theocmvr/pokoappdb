#ifndef POKEMONTYPE_H
#define POKEMONTYPE_H
#include <string>

enum class PokemonType {
    Fire, Water, Normal, Grass, Eletric, Poison, Flying, Bug, 
    Ground, Fairy, Fighting, Psychic, Rock, Ice, Ghost, Dragon
};

PokemonType stringtotype(std::string type);
std::string typetostring(PokemonType type);

#endif