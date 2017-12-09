#ifndef TOPPINGSERVICE_H
#define TOPPINGSERVICE_H
#include "Topping.h"
#include <iostream>
#include <vector>
#include "ToppingRepository.h"

using namespace std;

class toppingService
{
    public:
        toppingService();
        void add_topping(Topping& topping);
        vector<Topping> retrieve_all_toppings();

    private:
        ToppingRepository topping_repo;


};

#endif // TOPPINGSERVICE_H
