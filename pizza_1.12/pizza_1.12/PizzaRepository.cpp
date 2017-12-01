#include "PizzaRepository.h"
#include <fstream>
#include <iostream>
using namespace std;




void PizzaRepository::store_pizza(const BasicPizza& pizza)
{
    ofstream fout;
    fout.open("Pizza_file.txt", ios::app);

    cout << pizza;

    fout.close();
}

BasicPizza PizzaRepository::retrieve_pizza()
{

}
