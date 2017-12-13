#ifndef SECONDARYUI_H
#define SECONDARYUI_H
#include "MainUI.h"
#include "toppingService.h"
#include <iostream>
#include <conio.h>
#include <Drink.h>
#include "DrinkService.h"
#include <fstream>
#include "Pizza.h"
#include "pizzaService.h"
#include <iomanip>
#include "PizzaSizeService.h"
#include "PizzaSize.h"
class SecondaryUI
{
    public:
        SecondaryUI();
        /// sales
        void locationui();
        void ordersui();

        /// manager
        void startmanagerUI();
        void toppingui();
        void drinkui();
        void pizzapriceui();

        /// toppingui
        void toppingMenuOne();
        void toppingMenuThree();
        void toppingMenuTwo();

        /// DRINK UI
        void drinkMenuOne ();

        /// baker
        void startbakerUI();
        /// delivery
        void startdeliveryUI();

        //vector<Topping> addToToppings(vector<Topping>& toppings); /// skoða þetta betur
        void validate_input(char& input);

    private:

        bool continueSales;
        bool continueManager;
        bool continueAddTopping;
        bool continueBaseEdit;
        toppingService topping_service;
        PizzaSizeService size_service;
        PizzaService pizza_service;

      //  Topping addToppings();      /// á þetta að vera hér?
        bool continueAddDrink;
        bool continueDrink;
        DrinkService drink_service;
        //DrinkRepository drink_repo;
};

#endif // SECONDARYUI_H
