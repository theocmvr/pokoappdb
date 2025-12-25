#include "pokemon.hpp"
#include "auxfunctions.hpp"
#include <iostream>
#include <vector> 
int main() {
    Pokemon current("Charizard", {Type::Fire, Type::Flying}, 4);
    current.print();
    return 0;
}