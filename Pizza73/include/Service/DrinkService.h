#ifndef DRINKSERVICE_H
#define DRINKSERVICE_H

#include "Drink.h"
#include "DrinkRepository.h"

class DrinkService
{
    public:
        DrinkService();
        void add_drink(Drink& drink);
        vector<Drink> retrieve_all_drinks();

    private:
        DrinkRepository drink_repo;
};

#endif // DRINKSERVICE_H
