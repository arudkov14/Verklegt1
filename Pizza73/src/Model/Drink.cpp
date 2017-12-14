#include "Drink.h"

Drink::Drink()
{
    brand = "";
    size = "";
    price = 0;
}

Drink::Drink(string brand, string size, int price)
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

int Drink::get_price() const
{
    return this->price;
}




ostream& operator <<(ostream& out, Drink& drink) {
    out << drink.brand << "," << drink.size << "," << drink.price << ",";
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
