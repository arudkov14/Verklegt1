//
//  Order.hpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef Order_h
#define Order_h

#include <stdio.h>

#endif /* Order_hpp */
//#include "Pizza.h"            
#include "PizzaRepository.h"

class Order {
public:
    Order();
    void order_UI();
private:
    PizzaRepository PizzaRepo;
};
