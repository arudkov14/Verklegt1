#ifndef DRINKREPOSITORY_H
#define DRINKREPOSITORY_H

#include "Drink.h"
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <iostream>

class DrinkRepository
{
    public:
        DrinkRepository();
        void add_drink(Drink& drink);
        vector<Drink> retrieve_all_drinks();
        Drink parseString(string line);
    private:

};

#endif // DRINKREPOSITORY_H
