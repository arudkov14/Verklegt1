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

void Order::order_UI(){
    
    int number_of_pizzas;
    
    int number_of_toppings;
    
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
        
    }
    
    /*
    for (int i = 0; i < number_of_pizzas; i++) {
        Pizza pizza;
        cout << "Number of toppings on pizza no. " << i+1 << ": ";
        cin >> number_of_toppings;
        
        for (int j = 0; j < number_of_toppings; j++) {
            cout << "Topping no. " << j+1 << ": ";
            string topping  = pizza.get_topping();
            cin >> topping;
            cout << "Price of " << topping << ": ";
            int price = pizza.get_price();
            cin >> price;
        }
    }
     */
}
