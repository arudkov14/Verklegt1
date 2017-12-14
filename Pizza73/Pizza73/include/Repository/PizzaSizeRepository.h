#ifndef PIZZASIZEREPOSITORY_H
#define PIZZASIZEREPOSITORY_H
#include <iostream>
#include <vector>
using namespace std;
#include <fstream>
#include "PizzaSize.h"
#include <stdlib.h>



class PizzaSizeRepository
{
    public:
        PizzaSizeRepository();
        void PizzaSizeToFile(PizzaSize& pizzasize);
        vector<PizzaSize> retrieve_pizza_sizes();
        PizzaSize parseString(string line);

    private:

};

#endif // PIZZASIZEREPOSITORY_H
