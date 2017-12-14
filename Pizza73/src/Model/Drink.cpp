#include "Drink.h"

Drink::Drink()
{
    brand = "";
    size = "";
    price = "";
}

Drink::Drink(string brand, string size, string price)
{
    this->brand = brand;
    this->size = size;
    this->price = price;
}

/// GET FÖLL

string Drink::get_brand() const
{
    return this->brand;
}

string Drink::get_size() const
{
    return this->size;
}

string Drink::get_price() const
{
    return this->price;
}

/*
/// SET FÖLL

void Drink::set_brand(const Drink& drink)
{
    cin >> this->brand;
}

void Drink::set_size(const Drink& drink)
{
    cin >> this->size;
}

void Drink::set_price(const Drink& drink)
{
    cin >> this->price;
}
*/

ostream& operator <<(ostream& out, Drink& drink) {
    out << drink.brand << "," << drink.size << "," << drink.price << "," << endl;
    return out;
}

istream& operator >>(istream& in, Drink& drink) {
    cout << "Brand: ";
    in >> drink.brand;
    cout << "Size: ";
    in >> drink.size;
    cout << "Price: ";
    in >> drink.price;
    return in;
}
