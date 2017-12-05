//
//  PizzaRepository.cpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "PizzaRepository.h"
using namespace std;

void PizzaRepository::store_pizza(const Pizza& pizza)
{
    ofstream fout;
    fout.open("/Users/kristofergudmundsson/Documents/GitHub/Verklegt1/pizza_1.12/pizza_1.12/pizza_file.txt", ios::app);
    
    fout << pizza;
    
    fout.close();
}

void PizzaRepository::retrieve_pizza()
{
    ifstream fin;
    fin.open("/Users/kristofergudmundsson/Documents/GitHub/Verklegt1/pizza_1.12/pizza_1.12/pizza_file.txt");
    
    Pizza pizza;
    fin >> pizza;
    cout << pizza;
    fin.close();
    
    //return pizza;
}

