//
//  PizzaRepository.hpp
//  pizza_1.12
//
//  Created by Kristófer Gudmundsson on 1.12.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef PizzaRepository_h
#define PizzaRepository_h

#include <stdio.h>
#include <fstream>

#endif /* PizzaRepository_hpp */

#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "Pizza.h"


class PizzaRepository
{
private:
    
public:
    void store_pizza(const Pizza& pizza);
    Pizza retrieve_pizza();
};

#endif // PIZZAREPOSITORY_H
