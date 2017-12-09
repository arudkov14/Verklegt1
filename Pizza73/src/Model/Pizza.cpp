#include "Pizza.h"

Pizza::Pizza()
{
    base_pizza_price = 850;
}


Pizza::Pizza(int base_pizza_price, int topping_count, int pizza_size, string pizza_name)
{
    this->base_pizza_price = base_pizza_price;
    this->topping_count = topping_count;
    this->pizza_size = pizza_size;
    this->pizza_name = pizza_name;
}

int Pizza::get_base_pizza_price()
{
    return base_pizza_price;
}

int Pizza::get_topping_count()
{
    return topping_count;
}

int Pizza::get_pizza_size()
{
    return pizza_size;
}

string Pizza::get_pizza_name()
{
    return pizza_name;
}

ostream& operator <<(ostream& out, Pizza& pizza)
{
    out << pizza.pizza_name << ",";
    out << pizza.topping_count<< ",";
    out << pizza.pizza_size<< ",";
    out << pizza.base_pizza_price << endl;

        return out;
}

istream& operator >>(istream& in, Pizza& pizza)
{
    cout << "Name of the pizza: ";
    in >> pizza.pizza_name;
    cout << "Number of toppings: ";
    in >> pizza.topping_count;
    cout << "Size of the Pizza: 9'' 12'' 16'': ";
    in >> pizza.pizza_size;
    cout << "Prize of the Pizza: ";
    in >> pizza.base_pizza_price;
    return in;
}
