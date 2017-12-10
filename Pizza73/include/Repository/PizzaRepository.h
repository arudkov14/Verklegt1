#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "Pizza.h"
#include <fstream>
#include <iostream>
<<<<<<< HEAD
#include <ostream>
#include <stdlib.h>
=======
>>>>>>> master
using namespace std;


class PizzaRepository
{
    public:
<<<<<<< HEAD


        void add_pizza(Pizza& pizza);
        vector<Pizza> retrieve_all_pizza();
        Pizza parse_string(string line);
private:

=======
        PizzaRepository();

        void pizzaToTextFile(Pizza& pizza);
        Pizza retrievePizza();


    private:
>>>>>>> master
};

#endif // PIZZAREPOSITORY_H
