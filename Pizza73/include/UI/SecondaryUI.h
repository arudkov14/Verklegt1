#ifndef SECONDARYUI_H
#define SECONDARYUI_H
#include "MainUI.h"
#include <cstdlib>
#include "toppingService.h"
#include "PizzaService.h"
#include <iostream>
#include <conio.h>

class SecondaryUI
{
    public:
        SecondaryUI();
        /// sales
        void startsalesUI();
        void locationui();
        void ordersui();
        /// manager
        void startmanagerUI();
        void toppingui();
        void add_pizza();
        void show_all_pizzas();
        /// baker
        void startbakerUI();
        /// delivery
        void startdeliveryUI();
        void validate_input(char& input);

    private:
        Topping topping;
        bool continueSales;
        bool continueManager;
        bool continueAddTopping;
        bool continue_add_pizza;
        toppingService topping_service;
        PizzaService pizza_service;

};

#endif // SECONDARYUI_H
