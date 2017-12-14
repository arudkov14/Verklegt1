#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "Pizza.h"
#include <fstream>
#include <iostream>
#include <iostream>
#include <stdlib.h>
using namespace std;


class PizzaRepository
{
    public:
        void add_pizza(Pizza& pizza);
        vector<Topping> retrieve_pizza();
        Pizza parse_string(string line);
        void pizzaToFile(const Pizza& pizza);
        Topping parseString(string line);


private:

};

#endif // PIZZAREPOSITORY_H
