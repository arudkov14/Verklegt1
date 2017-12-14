#ifndef MANAGERUI_H
#define MANAGERUI_H

using namespace std;
#include <stdlib.h>
#include <iostream>
#include "MainUI.h"
#include "DrinkService.h"
#include "Topping.h"
#include "PizzaSize.h"
#include "PizzaSizeService.h"

class ManagerUI
{
    public:
        main_menu();

        ///DRINKS
        void drink_ui();
        void read_drinks();
        void add_drinks();
        void delete_drink();
        void print_drink_ui();
        void validate_drinks(Drink& drink);

        ///TOPPINGS
        void topping_ui();
        void read_toppings();
        void print_topping_ui();
        void validate_toppings(Topping& toppings);
        void add_toppings();
        void delete_topping();

        ///SIZE & PRICE
        void size_price_ui();
        void print_size_ui();
        void add_size();
        void validate_size(PizzaSize& pizza_size);
        void read_size();
        void remove_size();
    private:
};

#endif // MANAGERUI_H
