#ifndef POKEMONTYPE_H
#define POKEMONTYPE_H
#include <string>
#include <vector>

enum class PokemonType {
    Fire, Water, Normal, Grass, Electric, Poison,
    Flying, Bug, Ground, Fairy, Fighting, Psychic, 
    Rock, Ice, Ghost, Dragon, Steel
};

PokemonType stringtotype(std::string type);
std::string typetostring(PokemonType type);
std::vector<PokemonType> parseTypes(const std::string& types);

#endif