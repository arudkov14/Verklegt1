//
//  Sales.cpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Sales.h"

using namespace std;
#include <iostream>

Sales::Sales(){
    
}

char Sales::sales_UI(){
    
    char sales_UI_selection;
    
    cout << endl;
    cout << "----------------" << endl;
    cout << "SALES MAIN MENU" << endl;
    cout << "----------------" << endl;
    cout << endl;
    cout << "Select action: " << endl;
    cout << endl;
    cout << "o: Register order." << endl;
    cout << "m: Display menu." << endl;
    cout << "d: Display deals." << endl;
    cout << endl;
    //cout << "x: FLEIRI AÐGERÐIR" << endl;
    
    cin >> sales_UI_selection;
    
    return sales_UI_selection;
}
