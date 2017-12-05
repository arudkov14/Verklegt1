//
//  Manager.cpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Manager.h"

Manager::Manager(){
    
}

char Manager::manager_UI() {
    cout << endl;
    cout << "-----------------" << endl;
    cout << "MANAGER MAIN MENU" << endl;
    cout << "-----------------" << endl;
    cout << endl;
    cout << "Select action: " << endl;
    cout << endl;
    cout << "m: Create menu." << endl;
    cout << endl;
    //cout << "x: FLEIRI AÐGERÐIR" << endl;
    char manager_UI_selection;
    cin >> manager_UI_selection;
    return manager_UI_selection;
}

void Manager::create_menu() {
    Pizza pizza;
    pizza.create_menu_pizza();
}
