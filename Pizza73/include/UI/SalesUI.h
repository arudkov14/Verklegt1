#ifndef SALESUI_H
#define SALESUI_H
#include "Pizza.h"
#include "MainUI.h"
#include "toppingService.h"
#include "Topping.h"
#include <iostream>
#include <vector>
#include "PizzaSizeService.h"
using namespace std;
#include "string"
#include "Order.h"
#include "OrderService.h"
#include "Topping.h"


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

        string get_comment();
        string get_paymenstat();
        string get_orderstat();
        string get_deliverystat();
        string get_name();
        int get_total_pizza_price(vector<Pizza> pizzas);

    private:
        bool continueSales;
        bool continuePizzaOrder;
        bool continueOrder;
        bool continuegetSize;
        toppingService topping_service;
        PizzaSizeService size_service;
        OrderService order_service;


};

#endif // SALESUI_H
