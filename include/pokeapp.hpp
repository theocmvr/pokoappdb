#ifndef POKE_APP
#define POKE_APP
#include "pokeDB.hpp"

class PokeApp {
    private:
        PokeDB db;
    public: 
        PokeApp(PokeDB database);
        void run();
        void mainMenu();
};  

#endif