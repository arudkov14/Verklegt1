#ifndef SECONDARYUI_H
#define SECONDARYUI_H
#include "MainUI.h"
#include <cstdlib>
<<<<<<< HEAD
#include "toppingService.h"
#include "PizzaService.h"
=======
#include "Pizza.h" /// taka út líklega
//#include "Topping.h" /// taka út líklega
#include "toppingService.h"
>>>>>>> master
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
<<<<<<< HEAD
        /// manager
        void startmanagerUI();
        void toppingui();
        void add_pizza();
        void show_all_pizzas();
=======

        /// manager
        void startmanagerUI();
        void toppingui();


>>>>>>> master
        /// baker
        void startbakerUI();
        /// delivery
        void startdeliveryUI();
<<<<<<< HEAD
=======

        //vector<Topping> addToToppings(vector<Topping>& toppings); /// skoða þetta betur
>>>>>>> master
        void validate_input(char& input);

    private:
        Topping topping;
        bool continueSales;
        bool continueManager;
        bool continueAddTopping;
<<<<<<< HEAD
        bool continue_add_pizza;
        toppingService topping_service;
        PizzaService pizza_service;

=======
        toppingService topping_service;
      //  Topping addToppings();      /// á þetta að vera hér?
>>>>>>> master
};

#endif // SECONDARYUI_H
