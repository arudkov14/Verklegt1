#include "PizzaSize.h"

PizzaSize::PizzaSize()
{
    _size = "";
    base_price = 0;
}


PizzaSize::PizzaSize(string _size, int base_price) {
    this->_size = _size;
    this->base_price = base_price;
}


string PizzaSize::get_size()
{
    return this->_size;
}

int PizzaSize::get_price() {
    return this->base_price;
}

ostream& operator << (ostream& out, PizzaSize& pizzasize) {
    out << pizzasize._size << "." << pizzasize.base_price << "." << endl;
    return out;
}

istream& operator >>(istream& in, PizzaSize& pizzasize) {

    return in;

}
