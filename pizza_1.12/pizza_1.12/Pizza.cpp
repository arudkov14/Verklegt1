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
    out << pizza.stage << endl;
    
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

void Pizza::process(){
    char selection;
    cout << "Stage: " << endl;
    cin >> selection;
    stage = selection;
}

Pizza Pizza::create_pizza(){
    Pizza pizza;
    string name_of_pizza;
    
    cout << "Name:" << endl;
    cin >> name_of_pizza;
    
    cout << "Toppings:" << endl;
    cin >> *toppings;
    
    name = name_of_pizza;
    
    return pizza;
}

/*
Pizza::Pizza(int topping_count) {
    current_number_of_toppings = 0;
    toppings = new Topping[topping_count];
}

void Pizza::add_topping(Topping topping) {
    toppings[current_number_of_toppings++] = topping;
}

int Pizza::get_number_of_toppings(){
    return number_of_toppings;
}

ostream& operator << (ostream& out, const Pizza& pizza) {
    
    out << pizza.number_of_toppings << endl;
    out << pizza.current_number_of_toppings << endl;
    for (int i = 0; i < pizza.number_of_toppings; i++) {
        out << pizza.toppings[i] << endl;
    }*/
    /*
    return out;
}
*/
