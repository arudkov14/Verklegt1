#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H
#include "Pizza.h"
#include "PizzaRepository.h"
#include <iostream>



class PizzaService
{
    public:

       void add_pizza(Pizza& pizza);
       vector<Pizza> retrive_all_pizza();
       void pizzaToFile(Pizza& pizza);



    private:
        PizzaRepository pizza_repo;
};

#endif // PIZZASERVICE_H
