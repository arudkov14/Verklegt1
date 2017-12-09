#include "../../include/Models/pizza.h"


Pizza::Pizza()
{
    OrderNumber = 0;
}



void Pizza::addTopping(Topping topping)
{

    toppings.push_back(topping);

}

void Pizza::write(ofstream& fout) const
{

    int tCount = toppings.size();

    fout.write((char*)(&tCount), sizeof(int));

    for(int i = 0; i < tCount; i++) {
        toppings[i].write(fout);
    }

}

void Pizza::read(ifstream& fin)
{

    int tCount;
    fin.read((char*)(&tCount), sizeof(int));

    Topping topping;
    for (int i = 0; i < tCount; i++) {
        topping.read(fin);
        addTopping(topping);

    }

}

istream& operator >> (istream& in, Pizza& pizza)
{

    //int toppingCount;
    //in >> toppingCount;

    Topping topping;

    for(unsigned int i = 0; i < pizza.toppings.size(); i++) {
        in >> topping;
        pizza.addTopping(topping);
    }
    return in;

}


ostream& operator << (ostream& out, const Pizza& pizza)
{

    out << "Pizza with toppings: " << endl;

    for(unsigned int i = 0; i < pizza.toppings.size(); i++) {
        out << pizza.toppings[i] << endl;

    }
    return out;

}











