//
//  Order.cpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Order.h"
#include <iostream>
using namespace std;

Order::Order(){
    
}

void Order::order_UI() {
    
    cout << endl;
    cout << "Number of toppings: " << endl;
    int topping_count;
    cin >> topping_count;
    
    Pizza pizza(topping_count);
    
    for (int i = 0; i < topping_count; i++) {
        Topping topping;
        cin >> topping;
        pizza.add_topping(topping);
    }
    cout << endl;
    cout << pizza << endl;
    
    PizzaRepo.store_pizza(pizza);
    PizzaRepo.retrieve_pizza();
    
    pizza.pay();
}

/*
void Order::order_UI(){
    
    int number_of_pizzas;
    int number_of_toppings;
    
    cout << endl;
    cout << "Number of pizzas: " << endl;
    cin >> number_of_pizzas;
    
    for (int i = 0; i < number_of_pizzas; i++) {
        
        cout << "Number of toppings on pizza no. " << i+1 << ": ";
        cin >> number_of_toppings;
        
        Pizza pizza(number_of_toppings);
        
        for (int j = 0; j < number_of_toppings; j++) {
            Topping topping;
            cin >> topping;
            //pizza.add_topping(number_of_toppings);
        }
        cout << pizza;
    }
}

bool Order::pay(){
    bool pay = false;
    
    cout << "Pay now? (y/n) " << endl;
    
    char selection;
    cin >> selection;
    
    if (selection == 'y') {
        pay = true;
    }
    return pay;
}
*/
