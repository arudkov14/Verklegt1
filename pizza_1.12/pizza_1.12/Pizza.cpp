//
//  Pizza.cpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Pizza.h"

Pizza::Pizza(){
    topping_count = 0;
    toppings = 0;
    current_topping_count = 0;
}
Pizza::Pizza(int number_of_toppings) {
    initialize(number_of_toppings);
}

void Pizza::add_topping(Topping topping) {
    if (current_topping_count < topping_count) {
        toppings[current_topping_count] = topping;
        current_topping_count++;
    }
}

void Pizza::clean(){
    if (toppings != 0) {
        //delete[] toppings;
        toppings = 0;
        topping_count = 0;
        current_topping_count = 0;
    }
}

void Pizza::initialize(int number_of_toppings){
    clean();
    topping_count = number_of_toppings;
    toppings = new Topping[number_of_toppings];
    current_topping_count = 0;
}

ostream& operator << (ostream& out, const Pizza& pizza) {
    
    for (int i = 0; i < pizza.topping_count; i++) {
        out << pizza.toppings[i] << endl;
    }
    out << pizza.pay << endl;;
    out << pizza.status << endl;
    
    return out;
}

istream& operator >> (istream& in, Pizza& pizza) {
    
    int topping_count;
    in >> topping_count;
    pizza.initialize(topping_count);
    
    Topping topping;
    
    for (int i = 0; i < topping_count; i++) {
        in >> topping;
        pizza.add_topping(topping);
    }
    
    return in;
}

void Pizza::payment(){
    bool payment_status = false;
    char selection;
    cout << "Pay now? (y/n)" << endl;
    cin >> selection;
    if (selection == 'y') {
        payment_status =  true;
    }
    pay = payment_status;
}

int Pizza::process(){
    int selection;
    cout << "Stage: " << endl << "1: Ordered | 2: Preparation | 3: Delivered" << endl;
    cin >> selection;
    return selection;
}

void Pizza::set_status(int selection){
    status = selection;
}


Pizza Pizza::create_menu_pizza(){
    Pizza pizza;
    string name_of_pizza;
    // LAGA
    
    cout << "Name:" << endl;
    cin >> name_of_pizza;
    
    cout << "Toppings:" << endl;
    cin >> *toppings;
    
    name = name_of_pizza;
    
    return pizza;
}

