#ifndef TOPPINGREPOSITORY_H
#define TOPPINGREPOSITORY_H
#include "Topping.h"
#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>





class ToppingRepository
{
    public:
        ToppingRepository();
        void add_topping(Topping& topping);
       // vector<Topping> toppings;
        vector<Topping> retrieve_all_toppings();

    private:

};

#endif // TOPPINGREPOSITORY_H
