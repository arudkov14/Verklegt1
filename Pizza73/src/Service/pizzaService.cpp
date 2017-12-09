#include "pizzaService.h"

pizzaService::pizzaService()
{
    //ctor
}

void pizzaService::add_pizza(Pizza& pizza)
{
    pizza_repo.add_pizza(pizza);
}

vector<Pizza> pizzaService::retrive_all_pizza()
{
    vector<Pizza> all_pizzas = pizza_repo.retrieve_all_pizza();

    return all_pizzas;
}

