#include "DrinkRepository.h"

DrinkRepository::DrinkRepository()
{
    //ctor
}

void DrinkRepository::add_drink(Drink& drink)
{
    ofstream fout;
    fout.open("drinks_menu.txt", ios::app);

    if(fout.is_open()) {
        fout << drink;
        fout.close();
    }
    else {
        ///Throw exception
    }
}

/// PARSE STRING
Drink DrinkRepository::parseString(string line){

    string property;                ///Tómur upphafsstrengur.
    vector<string> properties;      ///Tómur vector af strengjum sem við fyllum í.

    for (unsigned int i = 0; i < line.length(); i++) {      ///Ítrum í gegnum línuna sem var send inn í fallið.
        if (line[i] == ',') {
            properties.push_back(property);
            property = "";

        } else {
            property += line[i];
        }
    }

    Drink d(properties[0], atof(properties[1].c_str()), atof(properties[2].c_str()));
    return d;
}

vector<Drink> DrinkRepository::retrieve_all_drinks()
{
    vector<Drink> drinks_from_menu;       ///Tómur vector.

    ifstream fin;
    fin.open("drinks_menu.txt");

    if(fin.is_open()) {
        string line;
        while (getline(fin, line)) {
            Drink drink = parseString(line);
            drinks_from_menu.push_back(drink);
        }
        fin.close();
    } else {
        cout << "Unable to read from file." << endl;
    }

    return drinks_from_menu;
}
