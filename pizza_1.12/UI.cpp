//
//  UI.cpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "UI.h"
#include <iostream>

using namespace std;

UI::UI() {
    //ctor
}

void UI::choiceOfCommand() {
    
    char selection;
    
    cout << "LOG IN" << endl << endl;
    cout << "Choose a profile: " << endl;
    cout << "m: Manager" <<  endl;
    cout << "s: Sales" <<  endl;
    cout << "b: Baker" << endl;
    cout << "d: Delivery" << endl;
    cout << endl;
    
    cin >> selection;
    
    if (selection == 'm') {
        Manager manager;
        manager.manager_UI();
    }
    if (selection == 's') {
        Sales sales;
        
        if (sales.sales_UI() == 'o') {
            Order order;
            order.order_UI();
        }
    }
    if (selection == 'b') {
        
    }
    if (selection == 'd') {
        
    }
}
