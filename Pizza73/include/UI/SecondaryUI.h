#ifndef SECONDARYUI_H
#define SECONDARYUI_H
#include "MainUI.h"
//#include <cstdlib>
#include "Pizza.h" /// taka út líklega
//#include "Topping.h" /// taka út líklega
#include "toppingService.h"
#include <iostream>
#include <conio.h>

#include <Drink.h>
#include "DrinkService.h"
#include <fstream>

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
        void drinkui();

        /// toppingui
        void toppingMenuOne();
        void toppingMenuTwo();

        /// baker
        void startbakerUI();
        /// delivery
        void startdeliveryUI();

        //vector<Topping> addToToppings(vector<Topping>& toppings); /// skoða þetta betur
        void validate_input(char& input);

    private:

        Topping topping_help;
        bool continueSales;
        bool continueManager;
        bool continueAddTopping;
        toppingService topping_service;

      //  Topping addToppings();      /// á þetta að vera hér?
        bool continueAddDrink;
        bool continueDrink;
        DrinkService drink_service;
        //DrinkRepository drink_repo;
};

#endif // SECONDARYUI_H
