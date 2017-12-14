#include "PizzaSizeService.h"

PizzaSizeService::PizzaSizeService()
{
    //ctor
}

/// fyrir manager
void PizzaSizeService::PizzaSizeToFile(PizzaSize& pizzasize) {
    pizzasize_repo.PizzaSizeToFile(pizzasize);
}

vector<PizzaSize> PizzaSizeService::retrieve_pizza_sizes() {
    vector<PizzaSize> pizzasize = pizzasize_repo.retrieve_pizza_sizes();
    return pizzasize;

}
