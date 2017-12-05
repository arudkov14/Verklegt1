//
//  Topping.hpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef Topping_h
#define Topping_h

#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
#endif /* Topping_h */

class Topping {
public:
    Topping();
    Topping(char *name, int price);
    ~Topping();
    
    friend istream& operator >> (istream& in, Topping& topping);
    friend ostream& operator << (ostream& out, const Topping& topping);
    
private:
    char topping_name[32];
    double topping_price;
};
