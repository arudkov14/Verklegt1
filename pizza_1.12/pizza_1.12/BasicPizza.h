//
//  BasicPizza.hpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef BasicPizza_hpp
#define BasicPizza_hpp

#include <stdio.h>
#include <string>
using namespace std;
#endif /* BasicPizza_hpp */

class BasicPizza {
public:
    BasicPizza();
    ~BasicPizza();
private:
    string basicPizzaName;
    int basicPizzaPrice;
};
