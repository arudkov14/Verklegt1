#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H
#include "Pizza.h"
#include "PizzaRepository.h"
#include <iostream>



class pizzaService
{
    public:
        pizzaService();
       void add_pizza(Pizza& pizza);
       vector<Pizza> retrive_all_pizza();



    private:
        PizzaRepository pizza_repo;
};

#endif // PIZZASERVICE_H
