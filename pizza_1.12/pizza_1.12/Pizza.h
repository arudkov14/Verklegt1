//
//  Pizza.hpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef Pizza_hpp
#define Pizza_hpp

#include <stdio.h>
#include <string>
#include "Topping.h"
#endif /* Pizza_hpp */

using namespace std;

class Pizza {
public:
    Pizza();
    Pizza(int topping_count);
    void add_topping(Topping topping);
    
private:
    int number_of_toppings;
    Topping *toppings;
    int current_number_of_toppings;
};
