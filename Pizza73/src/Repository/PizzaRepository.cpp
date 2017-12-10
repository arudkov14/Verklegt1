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

vector<Pizza> PizzaRepository::retrieve_all_pizza()
{
    vector<Pizza> pizzavector;


    ifstream fin;

    fin.open("PizzaList.txt");

    if (fin.is_open())
        {
        string line;
        while (getline(fin, line))
        {
            Pizza pizza = parse_string(line);
            pizzavector.push_back(pizza);
        }
        fin.close();
    }
    return pizzavector;
}
