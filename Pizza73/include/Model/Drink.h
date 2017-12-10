#ifndef DRINK_H
#define DRINK_H

using namespace std;
#include <string>
#include <iostream>

class Drink
{
    public:
        Drink();
        Drink(string brand, double size, double price);

        friend ostream& operator <<(ostream& out, Drink& drink);
        friend istream& operator >>(istream& in, Drink& drink);

        string get_brand() const;
        double get_size() const;
        double get_price() const;

    private:
        string brand;
        double size;
        double price;
};

#endif // DRINK_H
