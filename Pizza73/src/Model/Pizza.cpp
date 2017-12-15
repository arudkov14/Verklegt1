#include "Pizza.h"

Pizza::Pizza()
{



}
Pizza::Pizza(vector<Topping> toppings, int price, PizzaSize pizzasize) {
    this-> toppings = toppings;
    this-> price = price;
    this-> pizzasize = pizzasize;
}

vector<Topping> Pizza::get_toppings() {
    return this->toppings;
}

int Pizza::get_price() {
    return this->price;
}

PizzaSize Pizza::get_size() {
    return this-> pizzasize;
}


void Pizza::add_topping(Topping topping) {

    toppings.push_back(topping);
}



istream& operator >>(istream& in,Pizza& pizza)
{
    cout << "pizzaistream" << endl;

    return in;
}

ostream& operator <<(ostream& out, Pizza& pizza)
{

    out << pizza.price << ":" << pizza.pizzasize << ":";

    for (unsigned int i = 0; i < pizza.toppings.size(); i++) {
        out << pizza.toppings[i] << ",";
    }


    return out;
}
