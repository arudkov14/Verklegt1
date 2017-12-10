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
    Topping t(properties[0], atof(properties[1].c_str()));
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




/*
void ToppingRepository::deleteFromFile(int deltop)
{
    vector<Topping> temp;
    vector<Topping> currentList = retrieve_all_toppings();

    ifstream fin;
    fin.open("ToppingList.txt");
    ofstream fout;
    fout.open("temp.txt");

    for(unsigned int i = 0; i < currentList.size(); i++) {
        if((deltop-1)== i) {
            continue;
        }
        else {
            temp.push_back(currentList[i]);
            fout << temp[i] << endl;
        }
    }
    fout.close();
    fin.close();
    remove("ToppingList.txt");
    rename("temp.txt","ToppingList.txt");
}
*/


/// notum part af �essu fyrir delete
/*
void ToppingRepository::deleteFromFile()
{
    string deleteline;
    string line;

    ifstream fin;
    fin.open("ToppingList.txt");
    ofstream temp;
    temp.open("temp.txt");
    cout << "which topping do you want to remove? ";
    cin >> deleteline;

    while (getline(fin,line))
    {
        line.replace(line.find(deleteline),deleteline.length(),"");
        temp << line << endl;
    };

    temp.close();
    fin.close();
    remove("ToppingList.txt");
    rename("temp.txt","ToppingList.txt");


}
*/
