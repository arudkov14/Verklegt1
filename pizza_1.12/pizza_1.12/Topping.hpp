//
//  Topping.hpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef Topping_hpp
#define Topping_hpp

#include <stdio.h>
#include <string>
using namespace std;
#endif /* Topping_hpp */

class Topping {
public:
    Topping();
    ~Topping();
private:
    string toppingName;
    int toppingPrice;
};
