#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <vector>

enum class Type {
    Fire, Water, Normal, Grass, Eletric, Poison, Flying, Bug, 
    Ground, Fairy, Fighting, Psychic, Rock, Ice, Ghost, Dragon
};
class Pokemon { 
    private:
        std::string name;
        std::vector<Type> types;
        int pokedex_number;
    public:
        Pokemon(std::string name, std::vector<Type> type, int pokedex_number);
        Pokemon();
        ~Pokemon() = default;
        std::string getname() const;
        std::vector<Type> gettype() const;
        int getnumber() const;
        void print();
};
#endif