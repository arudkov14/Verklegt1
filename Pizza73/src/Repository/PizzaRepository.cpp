#include "PizzaRepository.h"

PizzaRepository::PizzaRepository()
{

}


Pizza PizzaRepository::PizzaRepository::retrievePizza() {

    ifstream fin;
    fin.open("pizzas.txt", ios::app);

    Pizza pizza;
    if (fin.is_open()) {
        fin >> pizza;
    }
    fin.close();

    return pizza;

}




void PizzaRepository::pizzaToTextFile(Pizza& pizza)
{
    ofstream fout;
    fout.open("pizzas.txt", ios::app);

    if (fout.is_open()) {

        fout << pizza << endl;

    }

    fout.close();
}


