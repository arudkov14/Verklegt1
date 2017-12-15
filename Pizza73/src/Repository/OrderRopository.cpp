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

void OrderRopository::deliverNewVectorToFile(vector<Order>& newlist) {

    ofstream fout;
    fout.open("tempOrder.txt");

    for(unsigned int i = 0; i < newlist.size(); i++) {
        fout << newlist[i] << endl;
        }

    fout.close();
    remove("Order_list.txt");
    rename("tempOrder.txt","Order_list.txt");
}

/// PARSE STRING
/*Order OrderRopository::parseString(string line){

    string property;           ///T�mur upphafsstrengur.
    vector<string> properties;      ///T�mur vector af strengjum sem vi� fyllum �.

    for (unsigned int i = 0; i < line.length(); i++) {      ///�trum � gegnum l�nuna sem var send inn � falli�.
        if (line[i] == '') {
            properties.push_back(property);
            property = "";

        } else {
            property += line[i];
        }
    }

    Order o(properties[0], atoi(properties[1].c_str()), properties[2], properties[3],properties[4], properties[5], properties[6]);
    return o;
}*/

vector<string> OrderRopository::retrieve_all_orders()
{
    vector<string> orders_from_menu;       ///T�mur vector.

    ifstream fin;
    fin.open("Order_list.txt");

    if(fin.is_open()) {
        string line;
        while (getline(fin, line)) {
            //Order ord = parseString(line);
            orders_from_menu.push_back(line);
        }
        fin.close();
    } else {
        cout << "Unable to read from file." << endl;
    }

    return orders_from_menu;
}
