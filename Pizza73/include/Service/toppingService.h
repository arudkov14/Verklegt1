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
        vector<Topping> NewList(int deltop);
        void deliverNewVectorToFile(vector<Topping>& newlist);




    private:
        ToppingRepository topping_repo;


};

#endif // TOPPINGSERVICE_H
