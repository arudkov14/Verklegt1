#include "ToppingRepository.h"


ToppingRepository::ToppingRepository()
{

}


void ToppingRepository::deliverNewVectorToFile(vector<Topping>& newlist) {

    ofstream fout;
    fout.open("temp.txt");

    for(unsigned int i = 0; i < newlist.size(); i++) {
        fout << newlist[i] << endl;
        }

    fout.close();
    remove("ToppingList.txt");
    rename("temp.txt","ToppingList.txt");
}


void ToppingRepository::add_topping(Topping& topping)
{
    ofstream fout;
    fout.open("ToppingList.txt", ios::app);
        if(fout.is_open()){
            fout << topping << endl;
            fout.close();
        }
        else {
            /// throw error
        }
}


Topping ToppingRepository::parseString(string line) {
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
    Topping t(properties[0], atoi(properties[1].c_str()));
    return t;
}


vector<Topping> ToppingRepository::retrieve_all_toppings() {

    vector<Topping> toppingsFromFile;

    ifstream fin("ToppingList.txt");
    if (fin.is_open()) {
        string line;

        while (getline(fin, line)) {
            Topping topp = parseString(line);
            toppingsFromFile.push_back(topp);

        }
        fin.close();
    }
    else {
        cout << "file is closed" << endl;

    }
    return toppingsFromFile;
}



