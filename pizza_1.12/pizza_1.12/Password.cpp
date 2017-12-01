//
//  Password.cpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Password.h"

Password::Password(){
    
}

void Password::access(char user){
    
    string password_attempt;
    cout << "Please enter password: ";
    cin >> password_attempt;
    
    if (user == 'm') {
        if (password_attempt == "manager") {
        }
        else {
            cout << "Password is incorrect." << endl;
            exit();
        }
    }
    
    if (user == 's') {
        if (password_attempt == "sales") {
        } /*
        else {
            cout << "Password is incorrect." << endl;
            _Exit(0);
        } */
    }
    
    if (user == 'b') {
        if (password_attempt == "baker") {
        }
        else {
            cout << "Password is incorrect." << endl;
            exit();
        }
    }
    
    if (user == 'd') {
        if (password_attempt == "delivery") {
        }
        else {
            cout << "Password is incorrect." << endl;
            exit();
        }
    }
}

int Password::exit(){
    return EXIT_SUCCESS;
}
