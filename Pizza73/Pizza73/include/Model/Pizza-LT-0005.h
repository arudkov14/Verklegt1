#ifndef PIZZA_H
#define PIZZA_H
#include <vector>
#include "Topping.h"
#include "pizzaService.h"


#include <fstream>
using namespace std;

class Pizza
{
    public:
        Pizza();
        Pizza(vector<Topping> toppings, int pizzaSize, int orderNumber);

        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out,  Pizza& pizza);
        void addToppings(Topping topping);
        void write(ofstream& fout);

        /// get functions
        vector<Topping> get_toppings();
        string get_size();
        int get_orderNumber();


    private:
        vector<Topping> toppings;
        string pizzaSize;
        int orderNumber;


};

#endif // PIZZA_H
