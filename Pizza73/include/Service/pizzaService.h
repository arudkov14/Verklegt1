#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H

#include "Topping.h"

class pizzaService
{
    public:
        pizzaService();

        vector<Topping> retrieve_all_toppings();

    private:
};

#endif // PIZZASERVICE_H
