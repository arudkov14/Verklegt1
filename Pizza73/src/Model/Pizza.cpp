#include "Pizza.h"

Pizza::Pizza()
{
//    base_pizza_price = 850;
//    pizza_size = "";
//    pizza_name = "";
}

void Pizza::add_topping(Topping topping) {

    toppings.push_back(topping);
}



/*
Pizza::Pizza(string pizza_name, string pizza_size, vector<Topping> topping, int base_pizza_price)
{
    this->topping = topping;
    this->base_pizza_price = base_pizza_price;
    this->pizza_size = pizza_size;
    this->pizza_name = pizza_name;
}

int Pizza::get_base_pizza_price()
{
    return base_pizza_price;
}

vector<Topping> Pizza::get_toppingvector()
{
    return topping;
}

string Pizza::get_pizza_size()
{
    return pizza_size;
}

string Pizza::get_pizza_name()
{
    return pizza_name;
}
*/


istream& operator >>(istream& in,Pizza& pizza)
{
    Topping topping;
    for(int i = 0; i < pizza.toppings.size(); i++) {
        in >> topping;
        pizza.add_topping(topping);
    }
    return in;
}

ostream& operator <<(ostream& out, Pizza& pizza)
{
    for(unsigned int i = 0; i < pizza.toppings.size(); i++) {
        out << pizza.toppings[i] << ",";
    }
    return out;
}
