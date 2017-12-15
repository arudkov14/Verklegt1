#include "BakerRepository.h"

vector<string> BakerRepository::retrieve_bakers_orders()
{
    vector<string> bakers_orders;       ///Tómur vector af orders

    ifstream fin;

    fin.open("Orders.txt");

    if(fin.is_open()) {
        string line;
        while (getline(fin, line)) {
            bakers_orders.push_back(line);
        }
        fin.close();
    } else {
        cout << "Unable to read from file." << endl;
    }

    return bakers_orders;
}

void BakerRepository::delete_order(string& baker_order)
{



    /*
    string line;

    ifstream fin;
    fin.open("Orders.txt");

    ofstream tempfout;
    tempfout.open("orders_temp.txt");

cout << "KEYRIR" << endl;

    while (getline(fin, line)) {
        line.replace(line.find(baker_order), baker_order.length(), "");
    }

    fin.close();
    tempfout.close();

    remove("Orders.txt");
    rename("orders_temp.txt", "Orders.txt");

    cout << "KEYRIR EKKI HINGAÐ" << endl;
    */
}
