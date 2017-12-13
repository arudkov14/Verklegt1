#ifndef PIZZASIZE_H
#define PIZZASIZE_H
#include <iostream>
using namespace std;


class PizzaSize
{
    public:
        PizzaSize();
        PizzaSize(string _size, int p_size_price);
        string get_size();
        int get_price();
        friend ostream& operator << (ostream& out, PizzaSize& pizzasize);
        friend istream& operator >>(istream& in, PizzaSize& pizzasize);



    private:
        string _size;
        int base_price;

};

#endif // PIZZASIZE_H
