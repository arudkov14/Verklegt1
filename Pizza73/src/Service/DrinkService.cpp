#include "DrinkService.h"

DrinkService::DrinkService()
{
    //ctor
}

void DrinkService::add_drink(Drink& drink)
{
    drink_repo.add_drink(drink);
}

vector<Drink> DrinkService::retrieve_all_drinks()
{
    return drink_repo.retrieve_all_drinks();
}
