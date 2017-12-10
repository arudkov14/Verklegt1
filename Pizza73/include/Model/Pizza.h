#ifndef PIZZA_H
#define PIZZA_H
#include <vector>
#include "Topping.h"
<<<<<<< HEAD
#include <cstdlib>
=======
#include "pizzaService.h"


>>>>>>> master
#include <fstream>
using namespace std;

class Pizza
{
    public:
        Pizza();
<<<<<<< HEAD
        Pizza(string pizza_name, int base_pizza_price, int topping_count,int  pizza_size);
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
=======
        Pizza(vector<Topping> toppings, int pizzaSize, int orderNumber);

        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out,  Pizza& pizza);
        void addToppings(Topping topping);
        void write(ofstream& fout);

        /// get functions
        vector<Topping> get_toppings();
        int get_size();
        int get_orderNumber();


    private:
        vector<Topping> toppings;
        int pizzaSize;
        int orderNumber;

>>>>>>> master

};

#endif // PIZZA_H
