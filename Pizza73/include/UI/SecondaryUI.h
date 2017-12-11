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
        void toppingMenuThree();
        void toppingMenuTwo();
        void validateToppings(Topping& toppings);

        /// DRINK UI
        void drinkMenuOne ();

        /// baker
        void startbakerUI();
        /// delivery
        void startdeliveryUI();

        void validateDrinks(Drink& drinks);

        //vector<Topping> addToToppings(vector<Topping>& toppings); /// skoða þetta betur
        void validate_input(char& input);

    private:


        Topping topping_model;
        bool continueSales;
        bool continueManager;
        bool continueAddTopping;
        toppingService topping_service;
        Pizza pizza_model;
        PizzaService pizza_service;

      //  Topping addToppings();      /// á þetta að vera hér?

        bool continueAddDrink;
        bool continueDrink;
        DrinkService drink_service;
        toppingService topping_service;
};

#endif // SECONDARYUI_H
