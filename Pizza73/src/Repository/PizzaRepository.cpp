#include "PizzaRepository.h"

/// má taka út


Topping  PizzaRepository::parseString(string line) {
    string property;
    vector<string> properties;
    for(unsigned int i = 0; i < line.length(); i++) {
        if(line[i] == ',') {
            properties.push_back(property);
            property = "";
        }
        else {
            property += line[i];
        }
    }
    Topping t(properties[0], properties[1]);
    return t;
}


/*

void PizzaRepository::add_pizza(Pizza& pizza)
{
    ofstream fout;
    fout.open("PizzaList.txt", ios::app);

        if(fout.is_open()){
            fout << pizza;
        }
        fout.close();
        else {
            cout << "File is not open";
        }
}
*/
/*
Pizza PizzaRepository::parse_string(string line)
{
    string property;
    vector<string> properties;

    for(unsigned int i = 0; i < line.length(); i++)
    {
        if(line[i] == ',')
        {
            properties.push_back(property);
            property = "";
        }
        else
        {
            property += line[i];
        }
    }
    Pizza p(properties[0], atoi(properties[1].c_str()), atoi(properties[2].c_str()), atoi(properties[3].c_str()));
    return p;
}
*/
/*
void PizzaRepository::pizzaToFile(vector<Topping>& toppings)
{
    ofstream fout;
    fout.open("PizzaList.txt", ios::app);

    if (fout.is_open()) {
        for(unsigned int i = 0; i < toppings.size(); i++) {
            fout << toppings[i] << endl;
        }
    fout.close();
    }
}
*/
