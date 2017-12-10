#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "Pizza.h"
#include <fstream>
#include <iostream>
#include <ostream>
#include <stdlib.h>
using namespace std;


class PizzaRepository
{
    public:


        void add_pizza(Pizza& pizza);
        vector<Pizza> retrieve_all_pizza();
        Pizza parse_string(string line);
private:

};

#endif // PIZZAREPOSITORY_H
