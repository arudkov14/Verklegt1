#ifndef SECONDARYUI_H
#define SECONDARYUI_H
#include "MainUI.h"
#include <cstdlib>
#include "Pizza.h" /// taka �t l�klega
//#include "Topping.h" /// taka �t l�klega
#include "toppingService.h"
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
        toppingService topping_service;
      //  Topping addToppings();      /// � �etta a� vera h�r?
};

#endif // SECONDARYUI_H
