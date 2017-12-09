#include "PizzaRepository.h"


void PizzaRepository::add_pizza(Pizza& pizza)
{
    ofstream fout;
    fout.open("PizzaList.txt", ios::app);

        if(fout.is_open()){
            fout << pizza;
            fout.close();
        }
        else {
            /// throw error
        }
}

vector<Pizza> PizzaRepository::retrieve_all_pizza()
{
    vector<Pizza> pizzavector;
    Pizza pizza;

    ifstream fin;

    fin.open("PizzaList.txt");

    if (fin.is_open()) {
        while (fin >> pizza)
        {
            pizzavector.push_back(pizza);
        }
        fin.close();
    }
    return pizzavector;
}
