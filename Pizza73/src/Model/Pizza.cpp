#include "Pizza.h"

Pizza::Pizza()
{
<<<<<<< HEAD
    base_pizza_price = 850;
}


Pizza::Pizza(string pizza_name,int topping_count,int pizza_size, int base_pizza_price)
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
    out << pizza.base_pizza_price <<","<< endl;

        return out;
}

istream& operator >>(istream& in,Pizza& pizza)
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
=======
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

>>>>>>> master
