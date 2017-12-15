#include "PizzaSize.h"

PizzaSize::PizzaSize()
{
    base_size = "";
    base_price = 0;
}


PizzaSize::PizzaSize(string base_size, int base_price) {
    this->base_size = base_size;
    this->base_price = base_price;
}


string PizzaSize::get_size()
{
    return this->base_size;
}

int PizzaSize::get_base_price() {
    return this->base_price;
}

ostream& operator << (ostream& out, PizzaSize& pizzasize) {
    out << pizzasize.base_size << "." << pizzasize.base_price << "." << endl;
    return out;
}

istream& operator >>(istream& in, PizzaSize& pizzasize) {
    cout << "Size: ";

    in >> ws;
    getline(in, pizzasize.base_size);

    cout << "Price: ";

    in >>  pizzasize.base_price;
    return in;

}
