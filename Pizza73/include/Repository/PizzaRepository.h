#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "Pizza.h"
#include <fstream>
#include <iostream>
using namespace std;


class PizzaRepository
{
    public:
        PizzaRepository();

        void pizzaToTextFile(Pizza& pizza);
        Pizza retrievePizza();


    private:
};

#endif // PIZZAREPOSITORY_H
