#include "DrinkService.h"

DrinkService::DrinkService()
{
    //ctor
}

vector<Drink> DrinkService::new_list(int deltop)
{
    vector<Drink> current_drinks = drink_repo.retrieve_all_drinks();
    vector<Drink> new_drink_list;


    for(unsigned int i = 0; i < current_drinks.size(); i++) {

        if(i == deltop -1) {
            continue;
        }
        else {
            new_drink_list.push_back(current_drinks[i]);
        }
    }
    return new_drink_list;
}

void DrinkService::deliverNewVectorToFile(vector<Drink>& newlist) {
    drink_repo.deliverNewVectorToFile(newlist);
}


void DrinkService::add_drink(Drink& drink)
{
        drink_repo.add_drink(drink);

}

vector<Drink> DrinkService::retrieve_all_drinks()
{
    return drink_repo.retrieve_all_drinks();
}

bool DrinkService::drink_brand(Drink drink)
{
    try
    {
        string brand_name = drink.get_brand();
        for(int i = 0; i < brand_name.length(); i++)
        {
            if(!isalpha(brand_name[i]))
            {
                throw InvalidBrandName();
            }
        }
    }

    catch(InvalidBrandName e)
    {
        return false;
    }

    return true;
}

bool DrinkService::drink_size(Drink drink)
{
    try
    {
    double size_of_drink = drink.get_size();
        if(size_of_drink !=0.5 && size_of_drink !=1 && size_of_drink !=2)
        {
            throw InvalidDrinkSize();
        }
        else if(isalpha(size_of_drink))
        {
            throw InvalidDrinkSize();
        }
    }
        catch(InvalidDrinkSize e)
        {
            return false;
        }
        return true;
}

bool DrinkService::drink_price(Drink drink)
{
    try
    {
        double price_0f_drink = drink.get_price();
        if(price_0f_drink < 0)
        {
            throw InvalidDrinkPrice();
        }
    }
        catch(InvalidDrinkPrice e)
        {
            return false;
        }
        return true;
}





