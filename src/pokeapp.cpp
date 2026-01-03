#include "pokeapp.hpp"
#include "pokeDB.hpp"
#include "pokemon.hpp"
#include "pokemontype.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <limits>


PokeApp::PokeApp(PokeDB db)
    : db(db) {}

void PokeApp::run() {
    
    int action = -1;
    
    do {
        
        std::cout << "\033[2J\033[H" << std::flush;

        mainMenu();

        if (!(std::cin >> action)) {
    
            std::cout << "\nInput is invalid.\nPress enter to continue";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            continue;
            
        }
        
        std::cout << "\033[2J\033[H" << std::flush;

        if (action == 1) {
    
            db.listall();
    
        } else if (action == 2) {
    
            std::string name;
            std::cout << "Name: ";
            std::cin >> name;
            std::cout << "Searching your pokemon..." << std::endl;
            try {
                db.searchByName(name).print();
            } catch (const std::invalid_argument& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            } 
    
        } else if (action == 3) {
    
            std::string name, type;
            std::vector<PokemonType> types;
            int typecount, number;
            
            std::cout << "Name: ";
            std::cin >> name;
            std::cout << "How many types your pokemon has? ";
            
            if (!(std::cin >> typecount)) {
                
                std::cout << "Input is invalid.\nPress enter to continue";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get();
                continue;
            
            }
    
            for(int i(0); i < typecount; i++) {
    
                std::cout << "Type " << i+1 << ": ";
                std::cin >> type;
                types.push_back(stringtotype(type));
    
            }
    
            std::cout << "Pokedex number: ";
            std::cin >> number;

            if (number < (int)db.maxdb()) {
            
                std::cout << "A pokemon with this number already exists." << std::endl;
            
            } else {
                
                db.add(Pokemon(name, types, number));
            
            }

    
        } else if (action != 0) {
    
            std::cout << "This option is not available, try again." << std::endl;
    
        }
    
        if (action != 0) {
            std::cout << "-----------------------------------------------------";
            std::cout << "\nPress enter to continue\n";
            std::cout << "-----------------------------------------------------";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
        } 
    
    } while (action > 0);
    
    std::cout << "\033[2J\033[H" << std::flush;
}

void PokeApp::mainMenu() {
    std::cout << "===== PokeDB =====" << std::endl;
    std::cout << "1 - List all Pokemon" << std::endl;
    std::cout << "2 - Search a Pokemon by name" << std::endl;
    std::cout << "3 - Add a new Pokemon" << std::endl;
    std::cout << "0 - Exit" << std::endl;
    std::cout << "Choose and option: ";
}
