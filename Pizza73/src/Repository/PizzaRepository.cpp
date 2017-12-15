#include "PizzaRepository.h"

/// má taka út


Topping  PizzaRepository::parseString(string line) {
    string property;
    vector<string> properties;
    for(unsigned int i = 0; i < line.length(); i++) {
        if(line[i] == ',') {
            properties.push_back(property);
            property = "";
        }
        else {
            property += line[i];
        }
    }
    Topping t(properties[0], atoi(properties[1].c_str()));
    return t;
}

