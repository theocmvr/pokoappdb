#include "pokemon.hpp"
#include "auxfunctions.hpp"
#include <iostream>
#include <vector> 
int main() {
    std::vector<Pokemon> pokeDB;
    int entries_number;
    std::cout << "How many Pokemon do you want to insert in your PokeDB?" << std::endl;
    std::cin >> entries_number;
    std::cout<< "Great! Let's start by gathering their info:" << std::endl;
    while(entries_number--) {
        pokeDB.push_back(getinfo());
    }
    return 0;
}