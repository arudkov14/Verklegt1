//
//  Topping.cpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Topping.h"


Topping::Topping(){
    //ctor
}

Topping::~Topping(){
    //dtor
}

Topping::Topping(char *name, int price) {
    strcpy(this->topping_name, name);
    topping_price = price;
}

istream& operator >> (istream& in, Topping& topping) {
    
    cout << "Topping: ";
    in >> topping.topping_name;
    
    cout << "Price: ";
    in >> topping.topping_price;
    return in;
}

ostream& operator << (ostream& out, const Topping& topping) {

    out << topping.topping_name;
    
    cout << " ";

    out << topping.topping_price;
    
    return out;
}
