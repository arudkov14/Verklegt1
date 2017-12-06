#include "../../include/Models/topping.h"


Topping::Topping()
{
    name = "";
    price = 0.0;
}

Topping::Topping(string name, double price)
{

    this->name = name;
    this->price = price;
}


istream& operator >> (istream& in, Topping& topping)
{


    cout << "Topping name: ";
    in >> ws;
    getline(in, topping.name);
    cout << endl;
    cout << "Topping price: ";
    in >> topping.price;

    return in;
}
ostream& operator << (ostream& out, const Topping& topping)
{

    out << "Topping: " << topping.name << " ";

    out << "Price: " << topping.price;

    return out;
}

void Topping::write(ofstream& fout) const
{

    int stringLength = name.length() + 1;               // name.length gefur lengdina � st�fum. B�tum vi� +1 til a� gera r�� fyrir '\0' character

    fout.write((char*)(&stringLength), sizeof(int));    // skrifum ni�ur lengdina � strengnum � int
    fout.write(name.c_str(), stringLength);             // name.c_str() b�r til character fylki �r strengnum af st�r�inni sem vi� skrifu�um inn � l�nunni a� ofan

    fout.write((char*)(&price), sizeof(double));        //  skrifum ver�i� � formi double

}

void Topping::read(ifstream& fin)
{

    int stringLength;

    fin.read((char*)(&stringLength), sizeof(int));      // byrjum � a� lesa upp lengdina af strengnum
    char *str = new char[stringLength];                 // b�um til character fylki � heapnum af �eirri lengd

    fin.read(str, stringLength);

    name = str;

    fin.read((char*)(&price), sizeof(double));

    delete []str;

}

string Topping::get_name()
{
    return this->name;
}



Topping::~Topping()
{
    //dtor
}
