#ifndef PIZZA_H
#define PIZZA_H
#include <vector>
#include "Topping.h"
#include <cstdlib>
#include <fstream>
using namespace std;

class Pizza
{
    public:
        Pizza();
       // Pizza (vector<Topping> toppings /*string pizza_size, , int base_pizza_price*/);
       // int get_base_pizza_price();
       // vector<Topping> get_toppingvector();
       // string get_pizza_size();
       // string get_pizza_name();

        friend ostream& operator <<(ostream& out, Pizza& pizza);
        friend istream& operator >>(istream& in, Pizza& pizza);

        void add_topping(Topping toppings);

    private:
        vector<Topping> toppings;
        int size;
  //      string pizza_size;



};

#endif // PIZZA_H
