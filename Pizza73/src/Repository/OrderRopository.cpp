#include "OrderRopository.h"

OrderRopository::OrderRopository()
{
    //ctor
}

void OrderRopository::add_order(Order& order)
{
    ofstream fout;
    fout.open("Order_list.txt", ios::app);

    if(fout.is_open()) {
        fout << order << endl;
        fout.close();
    }
    else {
        ///Throw exception
    }
}

/// PARSE STRING
Order OrderRopository::parseString(string line){

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

//    Order o(properties[0], atoi(properties[1].c_str()), properties[2], properties[3], properties[4], properties[5]);
   // return o;
}
