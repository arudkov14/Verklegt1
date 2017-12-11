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
        void validateToppings(Topping& toppings);

        /// baker
        void startbakerUI();
        /// delivery
        void startdeliveryUI();

        void validateDrinks(Drink& drinks);

        //vector<Topping> addToToppings(vector<Topping>& toppings); /// skoða þetta betur
        void validate_input(char& input);

    private:

        bool continueSales;
        bool continueManager;
        bool continueAddTopping;
        bool continueAddDrink;
        bool continueDrink;
        DrinkService drink_service;
        toppingService topping_service;
};

#endif // SECONDARYUI_H
