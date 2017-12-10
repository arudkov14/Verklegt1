#include "PizzaService.h"



void PizzaService::add_pizza(Pizza& pizza)
{
    pizza_repo.add_pizza(pizza);
}

vector<Pizza> PizzaService::retrive_all_pizza()
{
    return pizza_repo.retrieve_all_pizza();
}

