#include "Drink.h"

Drink::Drink()
{
    brand = "";
    size = 0;
    price = 0;
}

Drink::Drink(string brand, double size, double price)
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

double Drink::get_size() const
{
    return this->size;
}

double Drink::get_price() const
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
