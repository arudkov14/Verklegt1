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

    string property;           ///Tómur upphafsstrengur.
    vector<string> properties;      ///Tómur vector af strengjum sem við fyllum í.

    for (unsigned int i = 0; i < line.length(); i++) {      ///Ítrum í gegnum línuna sem var send inn í fallið.
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
