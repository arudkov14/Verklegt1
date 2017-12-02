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
    
    pizza.payment();
    
    pizza.process();
    
    cout << endl;
    cout << pizza << endl;
    PizzaRepo.store_pizza(pizza);
    PizzaRepo.retrieve_pizza();
}
