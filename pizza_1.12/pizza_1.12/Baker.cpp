//
//  Baker.cpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Baker.h"
#include <fstream>
#include <iostream>
using namespace std;

Baker::Baker(){
    
}

char Baker::baker_UI(){
    cout << endl;
    cout << "---------------" << endl;
    cout << "BAKER MAIN MENU" << endl;
    cout << "---------------" << endl;
    cout << endl;
    cout << "Select action: " << endl;
    cout << endl;
    cout << "d: Display orders." << endl;
    cout << endl;
    //cout << "x: FLEIRI AÐGERÐIR" << endl;
    char baker_UI_selection;
    cin >> baker_UI_selection;
    return baker_UI_selection;
}

void Baker::display_orders() {
    ifstream fin;
    fin.open("/Users/kristofergudmundsson/Documents/GitHub/Verklegt1/pizza_1.12/pizza_1.12/pizza_file.txt");
    //Pizza pizza;
    //fin >> pizza;
    fin.close();
}
