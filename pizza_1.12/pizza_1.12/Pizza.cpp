//
//  Pizza.cpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Pizza.h"

Pizza::Pizza(){
    
}

Pizza::Pizza(int topping_count) {
    current_number_of_toppings = 0;
    toppings = new Topping[topping_count];
}

void Pizza::add_topping(Topping topping) {
    toppings[current_number_of_toppings++] = topping;
}
