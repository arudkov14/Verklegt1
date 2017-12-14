#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
#include <vector>
using namespace std;


class Topping
{
    public:
        Topping();
        Topping(string name, string price);

        string get_name();
        string get_price();
        void set_verbose(bool v);

        friend istream& operator >> (istream& in, Topping& topping);
        friend ostream& operator << (ostream& out, Topping& topping);


        vector<Topping> toppings;


    private:
        string name;
        string price;

};

#endif // TOPPING_H
