#ifndef DRINK_H
#define DRINK_H
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
class Drink
{
      public:
        Drink();
        Drink(string brand, string size, int price);
        int get_price()const;
        string get_size()const;
        string get_brand()const;

        friend ostream& operator <<(ostream& out, Drink& drink);
        friend istream& operator >>(istream& in, Drink& drink);

    private:
        string brand;
        int price;
        string size;
};

#endif // DRINK_H
