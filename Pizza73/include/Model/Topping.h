#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
#include <vector>
using namespace std;


class Topping
{
    public:
        Topping();
        Topping(string name, double price, bool verbose);

        string get_name() const;
        double get_price() const;
        bool get_verbose() const;

        void set_name(const Topping& topping);
        void set_price(const Topping& topping);

        friend istream& operator >> (istream& in, Topping& topping);
        friend ostream& operator << (ostream& out, Topping& topping);
        void set_verbose(bool& v); //

        vector<Topping> toppings;

    private:
        bool verbose;
        string name;
        double price;

};

#endif // TOPPING_H
