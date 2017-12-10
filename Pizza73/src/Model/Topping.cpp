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

bool Topping::get_verbose() {
    return this-> verbose;
}

string Topping::get_name() {
    return this-> name;
}

double Topping::get_price() {
    return this-> price;
}

istream& operator >> (istream& in, Topping& topping) {

<<<<<<< HEAD
    cout << "Topping name:  ";
=======
    cout << "Topping name: ";
>>>>>>> master

    in >> ws;
    getline(in, topping.name);

    cout << "Topping price: ";
    in >> topping.price;

    return in;
}

ostream& operator << (ostream& out, Topping& topping) {

        out << "Topping: ";
<<<<<<< HEAD
        out << topping.name << " ";

        out << "Price: ";
        out << topping.price << " ";
=======
        out << topping.name;

        out << "Price: ";
        out << topping.price;
>>>>>>> master
        cout << endl;



    return out;
}
