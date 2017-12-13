#ifndef PIZZA_H
#define PIZZA_H
#include <vector>
#include "Topping.h"
#include "PizzaSize.h"
#include <cstdlib>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Pizza
{
    public:
        Pizza();
        Pizza(vector<Topping> toppings, int price, PizzaSize pizzasize);
        vector<Topping> get_toppings();
        int get_price();
        PizzaSize get_size();


        friend ostream& operator <<(ostream& out, Pizza& pizza);
        friend istream& operator >>(istream& in, Pizza& pizza);

        void add_topping(Topping toppings);

    private:
        vector<Topping> toppings;
        int price;
        PizzaSize pizzasize;





};

#endif // PIZZA_H
