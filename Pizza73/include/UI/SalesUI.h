#ifndef SALESUI_H
#define SALESUI_H

#include "MainUI.h"
#include "toppingService.h"
#include "Topping.h"
#include <iostream>
#include <vector>
using namespace std;



class SalesUI
{
    public:

        SalesUI();

        void startsalesUI();
        void startorderUI();

        Pizza get_pizza();
        vector<Topping> get_toppings();
        int get_size_price(PizzaSize pizzasize);
        int get_topping_price(vector<Topping> toppings);
        PizzaSize get_pizzasize();

    private:
        bool continueSales;
        bool continuePizzaOrder;
        bool continueOrder;
        bool continuegetSize;
        toppingService topping_service;
        PizzaSizeService size_service;


};

#endif // SALESUI_H
