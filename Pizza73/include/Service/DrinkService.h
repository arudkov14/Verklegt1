#ifndef DRINKSERVICE_H
#define DRINKSERVICE_H
#include <string>
#include "Drink.h"
#include "DrinkRepository.h"
#include "InvalidBrandName.h"
#include "InvalidDrinkSize.h"
#include "InvalidDrinkPrice.h"

class DrinkService
{
    public:
        DrinkService();
        void add_drink(Drink& drink);
        vector<Drink> retrieve_all_drinks();
        vector<Drink> new_list(int deltop);
        void deliverNewVectorToFile(vector<Drink>& newlist);
        bool drink_brand(Drink drink);
        bool drink_size(Drink drink);
        bool drink_price(Drink drink);

    private:
        DrinkRepository drink_repo;
};

#endif // DRINKSERVICE_H
