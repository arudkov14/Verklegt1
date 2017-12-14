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

/*
        /// toppingui
        void toppingMenuOne();
        void toppingMenuThree();
        void toppingMenuTwo();
        void validateToppings(Topping& toppings);
*/
        /// DRINK UI
        void drinkMenuOne ();

        /// baker
        void startbakerUI();
        /// delivery
        void startdeliveryUI();

        void validateDrinks(Drink& drinks);

        //vector<Topping> addToToppings(vector<Topping>& toppings); /// skoÃ°a Ã¾etta betur
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
};

#endif // SECONDARYUI_H
