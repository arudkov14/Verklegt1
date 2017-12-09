#ifndef SECONDARYUI_H
#define SECONDARYUI_H
#include "MainUI.h"
#include <cstdlib>
#include "Pizza.h" /// taka �t l�klega
//#include "Topping.h" /// taka �t l�klega
#include "toppingService.h"
#include "pizzaService.h"
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


        /// baker
        void startbakerUI();
        /// delivery
        void startdeliveryUI();

        //vector<Topping> addToToppings(vector<Topping>& toppings); /// sko�a �etta betur
        void validate_input(char& input);

    private:
        Topping topping;
        bool continueSales;
        bool continueManager;
        bool continueAddTopping;
        bool continue_add_pizza;
        toppingService topping_service;
        pizzaService pizza_service;
      //  Topping addToppings();      /// � �etta a� vera h�r?
};

#endif // SECONDARYUI_H
