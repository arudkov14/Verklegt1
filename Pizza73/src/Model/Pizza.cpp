#include "Pizza.h"

Pizza::Pizza()
{
    pizzaSize = 0;
}

Pizza::Pizza(vector<Topping> toppings, int pizzaSize) {
    this->toppings = toppings;
    this->pizzaSize = pizzaSize;
}


vector<Topping> Pizza::get_toppings() {
    return this->toppings;
}

int Pizza::get_size() {
    return this->pizzaSize;
}

/// skoða allt fyrir neðan þetta fyrir utan ostream og istream
void Pizza::addToppings(Topping topping)
{

    toppings.push_back(topping);

}

ostream& operator << (ostream& out, Pizza& pizza)
{
    out << "Pizza with toppings: " << endl;

    for(unsigned int i = 0; i < pizza.toppings.size(); i++) {
        out << pizza.toppings[i] << endl;
    }
    return out;

}

istream& operator >> (istream& in, Pizza& pizza)
{

    cout << "Add toppings: " << endl;

    //in >> pizza.toppings


    /*
    Topping topping;

    for (unsigned int i = 0; i < pizza.toppings.size(); i++) {
        in >>  topping;
        pizza.addToppings(topping);
    }*/

    return in;
}

