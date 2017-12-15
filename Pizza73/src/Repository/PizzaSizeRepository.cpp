#include "PizzaSizeRepository.h"

PizzaSizeRepository::PizzaSizeRepository()
{
    //ctor
}

void PizzaSizeRepository::deliverNewVectorToFile(vector<PizzaSize>& newlist) {

    ofstream fout;
    fout.open("tempSize.txt");

    for(unsigned int i = 0; i < newlist.size(); i++) {
        fout << newlist[i];
        }

    fout.close();
    remove("PizzaSize.txt");
    rename("tempSize.txt","PizzaSize.txt");
}

void PizzaSizeRepository::PizzaSizeToFile(PizzaSize& pizzasize) {
    ofstream fout("PizzaSize.txt", ios::app);
    if(fout.is_open()) {
        fout << pizzasize;
        fout.close();
    }
    else {
        cout << "PizzaSize.txt is not open" << endl;
    }
}

PizzaSize PizzaSizeRepository::parseString(string line) {
    string property;
    vector<string> properties;
    for(unsigned int i = 0; i < line.length(); i++) {
        if(line[i] == '.') {
            properties.push_back(property);
            property = "";
        }
        else {
            property += line[i];
        }
    }
    PizzaSize p(properties[0], atoi(properties[1].c_str()));
    return p;

}



vector<PizzaSize> PizzaSizeRepository::retrieve_pizza_sizes()
{
    vector<PizzaSize> sizeOptionsFromFile;

    ifstream fin("PizzaSize.txt");
    if(fin.is_open()) {
        string line;
        while(getline(fin, line)) {
            PizzaSize pizzasize = parseString(line);
            sizeOptionsFromFile.push_back(pizzasize);
        }
        fin.close();
    }
    else {
        cout << "file is closed" << endl;

    }
    return sizeOptionsFromFile;
}
