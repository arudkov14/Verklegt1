#include "Pizza.h"

Pizza::Pizza()
{
    pizzaSize = 0;
    orderNumber = 0;
}

Pizza::Pizza(vector<Topping> toppings, int pizzaSize, int OrderNumber) {
    this->toppings = toppings;
    this->pizzaSize = pizzaSize;
    this->orderNumber = orderNumber;
}


vector<Topping> Pizza::get_toppings() {
    return this->toppings;
}

int Pizza::get_size() {
    return this->pizzaSize;
}

int Pizza::get_orderNumber() {
    return this-> orderNumber;
}

/// skoða allt fyrir neðan þetta fyrir utan ostream og istream
void Pizza::addToppings(Topping topping)
{

    toppings.push_back(topping);

}

void Pizza::write(ofstream& fout)
{

    vector<Topping> toppings;

    for (unsigned int i = 0; i < toppings.size(); i++) {
        fout << toppings[i] << endl;
    }

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
    Topping topping;

    for (unsigned int i = 0; i < pizza.toppings.size(); i++) {
        in >>  topping;
        pizza.addToppings(topping);
    }

    return in;
}

