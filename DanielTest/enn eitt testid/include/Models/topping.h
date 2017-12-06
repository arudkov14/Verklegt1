#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
#include <vector>
#include <stddef.h>
#include <fstream>
using namespace std;


class Topping
{
public:
    Topping();
    virtual ~Topping();
    Topping(string name, double price);

    friend istream& operator >> (istream& in, Topping& topping);
    friend ostream& operator << (ostream& out, const Topping& topping);

    void write(ofstream& fout) const;
    void read(ifstream& fin);
    string get_name();



protected:

private:
    string name;
    double price;



};

#endif // TOPPING_H
