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

    int stringLength = name.length() + 1;               // name.length gefur lengdina í stöfum. Bætum við +1 til að gera ráð fyrir '\0' character

    fout.write((char*)(&stringLength), sizeof(int));    // skrifum niður lengdina á strengnum í int
    fout.write(name.c_str(), stringLength);             // name.c_str() býr til character fylki úr strengnum af stærðinni sem við skrifuðum inn í línunni að ofan

    fout.write((char*)(&price), sizeof(double));        //  skrifum verðið í formi double

}

void Topping::read(ifstream& fin)
{

    int stringLength;

    fin.read((char*)(&stringLength), sizeof(int));      // byrjum á að lesa upp lengdina af strengnum
    char *str = new char[stringLength];                 // búum til character fylki á heapnum af þeirri lengd

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
