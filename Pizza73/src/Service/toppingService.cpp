#include "toppingService.h"

toppingService::toppingService()
{
    //ctor
}

void toppingService::add_topping(Topping& topping) {
    topping_repo.add_topping(topping);

}


vector<Topping> toppingService::retrieve_all_toppings()
{
   return topping_repo.retrieve_all_toppings();
}

vector<Topping> toppingService::NewList(int deltop)
{
    vector<Topping> currentToppingList = topping_repo.retrieve_all_toppings();
    vector<Topping> newToppingList;


    for(unsigned int i = 0; i < currentToppingList.size(); i++) {

        if(i == deltop -1) {
            continue;
        }
        else {
            newToppingList.push_back(currentToppingList[i]);
        }
    }
    return newToppingList;
}


void toppingService::deliverNewVectorToFile(vector<Topping>& newlist) {
    topping_repo.deliverNewVectorToFile(newlist);

}


bool toppingService::topping_name(Topping topping)
{
    try
    {
        string name_of_topping = topping.get_name();
        for(int i = 0; i < name_of_topping.length(); i++)
        {
            if(!isalpha(name_of_topping[i]))
                throw InvalidToppingName();
        }
    }

    catch(InvalidToppingName e)
    {
        return false;
    }
    return true;
}

bool toppingService::topping_price(Topping topping)
{
    try
    {
        int topping_price_num = atoi(topping.get_price().c_str());
        string topping_price = topping.get_price();
        if(topping_price_num < 0)
        {
            throw InvalidToppingPrice();
        }
        for(int i = 0; i < topping_price.length(); i ++)
        {
            if(isalpha(topping_price[i]))
            {
                throw InvalidToppingPrice();
            }
        }
    }

        catch(InvalidToppingPrice e)
        {
            return false;
        }

    return true;
}

