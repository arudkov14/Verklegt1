#ifndef PIZZA_H
#define PIZZA_H
#include <vector>
#include "Topping.h"

#include <fstream>
using namespace std;

class Pizza
{
    public:
        Pizza();
        Pizza(int base_pizza_price, int topping_count,int  pizza_size, string pizza_name);
        int get_base_pizza_price();
        int get_topping_count();
        int get_pizza_size();
        string get_pizza_name();

        friend ostream& operator <<(ostream& out, Pizza& pizza);
        friend istream& operator >>(istream& in, Pizza& pizza);


    private:
        int base_pizza_price;
        int topping_count;
        int pizza_size;
        string pizza_name;

};

#endif // PIZZA_H
