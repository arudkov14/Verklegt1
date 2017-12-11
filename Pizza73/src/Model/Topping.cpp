#include "Topping.h"

Topping::Topping()
{
    name = "";
    price = 0;
}


Topping::Topping(string name, double price) {
    this->name = name;
    this->price = price;

}

void Topping::set_verbose(bool v) {
     verbose = v;
}

string Topping::get_name() {
    return this-> name;
}

double Topping::get_price() {
    return this-> price;
}

istream& operator >> (istream& in, Topping& topping) {


    cout << "Topping name: ";

    in >> ws;
    getline(in, topping.name);


    cout << "Topping price: ";

    in >> topping.price;

    return in;
}

ostream& operator << (ostream& out, Topping& topping) {

        out << topping.name << "," << topping.price << ",";


    return out;
}