#include "Topping.h"

Topping::Topping()
{
    name = "";
    price = 0;
    verbose = false;
}

void Topping::set_verbose(bool& v) {
    verbose = v;
}

Topping::Topping(string name, double price, bool verbose) {
    this->name = name;
    this->price = price;
    this->verbose = verbose;
}

bool Topping::get_verbose() const {
    return this-> verbose;
}

string Topping::get_name() const {
    return this-> name;
}

double Topping::get_price() const {
    return this-> price;
}

void Topping::set_name(const Topping& topping) {
    cin >> this->name;
}

void Topping::set_price(const Topping& topping) {
    cin >> this->price;
}

istream& operator >> (istream& in, Topping& topping) {

    //cout << "Topping name: " << endl;

    in >> ws;
    getline(in, topping.name);

    //cout << "Topping price: " << endl;
    in >> topping.price;

    return in;
}

ostream& operator << (ostream& out, Topping& topping) {

        //out << "Topping: ";
        out << topping.name << endl;

        //out << "Price: ";
        out << topping.price << endl;
        cout << endl;



    return out;
}
