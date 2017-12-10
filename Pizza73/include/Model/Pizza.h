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
        Pizza(vector<Topping> toppings, int pizzaSize);

        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out,  Pizza& pizza);
        void addToppings(Topping topping);
        void write(ofstream& fout);

        /// get functions
        vector<Topping> get_toppings();
        int get_size();


    private:
        vector<Topping> toppings;
        int pizzaSize;


};

#endif // PIZZA_H
