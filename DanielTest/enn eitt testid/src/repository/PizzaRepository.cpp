#include "PizzaRepository.h"

PizzaRepository::PizzaRepository()
{
    //ctor
}

void PizzaRepository::storePizza(const Pizza& pizza)
{

    ofstream fout;
    fout.open("pizzas.bin", ios::binary);

    pizza.write(fout);

    fout.close();

}

Pizza PizzaRepository::retrievePizza()
{

    ifstream fin;
    fin.open("pizzas.bin", ios:: binary);

    Pizza pizza;
    pizza.read(fin);

    fin.close();


    return pizza;
}



PizzaRepository::~PizzaRepository()
{
    //dtor
}
