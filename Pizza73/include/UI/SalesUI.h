#ifndef SALESUI_H
#define SALESUI_H
#include "MainUI.h"
#include "toppingService.h"


class SalesUI
{
    public:
        SalesUI();

        void startsalesUI();
        void startorderUI();

        vector<Topping> get_pizzatoppings();


    private:
        bool continueSales;
        bool continuePizzaOrder;
        toppingService topping_service;

};

#endif // SALESUI_H
