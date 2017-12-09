#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "Pizza.h"
#include <fstream>
#include <iostream>
#include <ostream>
using namespace std;


class PizzaRepository
{
    public:


        void add_pizza(Pizza& pizza);
        vector<Pizza> retrieve_all_pizza();



    private:
};

#endif // PIZZAREPOSITORY_H
