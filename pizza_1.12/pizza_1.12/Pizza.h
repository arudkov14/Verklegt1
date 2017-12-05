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
    Pizza(int number_of_toppings);
    void add_topping(Topping topping);
    void initialize(int number_of_toppings);
    void clean();
    void payment();
    int process();
    void set_status(int selection);
    Pizza create_menu_pizza();
    int total_topping_price();
    
    friend ostream& operator << (ostream& out, const Pizza& pizza);
    friend istream& operator >> (istream& in, Pizza& pizza);
    
private:
    int topping_count;
    Topping *toppings;
    int current_topping_count;
    bool pay;
    int status;
    string name;
};
