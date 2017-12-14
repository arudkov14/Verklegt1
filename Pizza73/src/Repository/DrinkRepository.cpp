#include "DrinkRepository.h"

DrinkRepository::DrinkRepository()
{
    //ctor
}

void DrinkRepository::deliverNewVectorToFile(vector<Drink>& newlist) {

    ofstream fout;
    fout.open("tempDrink.txt");

    for(unsigned int i = 0; i < newlist.size(); i++) {
        fout << newlist[i] << endl;
        }

    fout.close();
    remove("drinks_menu.txt");
    rename("tempDrink.txt","drinks_menu.txt");
}

void DrinkRepository::add_drink(Drink& drink)
{
    ofstream fout;
    fout.open("drinks_menu.txt", ios::app);

    if(fout.is_open()) {
        fout << drink << endl;
        fout.close();
    }
    else {
        ///Throw exception
    }
}

/// PARSE STRING
Drink DrinkRepository::parseString(string line){

    string property;           ///T�mur upphafsstrengur.
    vector<string> properties;      ///T�mur vector af strengjum sem vi� fyllum �.

    for (unsigned int i = 0; i < line.length(); i++) {      ///�trum � gegnum l�nuna sem var send inn � falli�.
        if (line[i] == ',') {
            properties.push_back(property);
            property = "";

        } else {
            property += line[i];
        }
    }

    Drink d(properties[0], properties[1], properties[2]);
    return d;
}

vector<Drink> DrinkRepository::retrieve_all_drinks()
{
    vector<Drink> drinks_from_menu;       ///T�mur vector.

    ifstream fin;
    fin.open("drinks_menu.txt");

    if(fin.is_open()) {
        string line;
        while (getline(fin, line)) {
            Drink drin = parseString(line);
            drinks_from_menu.push_back(drin);
        }
        fin.close();
    } else {
        cout << "Unable to read from file." << endl;
    }

    return drinks_from_menu;
}
