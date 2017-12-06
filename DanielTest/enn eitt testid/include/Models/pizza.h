#ifndef PIZZA_H
#define PIZZA_H
#include <stddef.h>
#include <fstream>
#include "../../include/Models/topping.h"
#include <vector>
#include <iostream>

class Pizza
{
public:
    Pizza();
    Pizza(int numberOfToppings);
    virtual ~Pizza();

    void addTopping(Topping topping);

    void write(ofstream& fout) const;
    void read(ifstream& fin);

    friend istream& operator >> (istream& in, Pizza& pizza);
    friend ostream& operator << (ostream& out, const Pizza& pizza);

protected:

private:
    vector<Topping> toppings;
    unsigned int OrderNumber;

};

#endif // PIZZA_H
