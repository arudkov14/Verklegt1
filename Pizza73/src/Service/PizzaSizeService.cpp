#include "PizzaSizeService.h"

PizzaSizeService::PizzaSizeService()
{
    //ctor
}

vector<PizzaSize> PizzaSizeService::new_list(int deltop)
{
    vector<PizzaSize> current_sizes = pizzasize_repo.retrieve_pizza_sizes();
    vector<PizzaSize> new_sizes_list;


    for(unsigned int i = 0; i < current_sizes.size(); i++) {

        if(i == deltop -1) {
            continue;
        }
        else {
            new_sizes_list.push_back(current_sizes[i]);
        }
    }
    return new_sizes_list;
}

void PizzaSizeService::deliverNewVectorToFile(vector<PizzaSize>& newlist) {
    pizzasize_repo.deliverNewVectorToFile(newlist);
}


/// fyrir manager
void PizzaSizeService::PizzaSizeToFile(PizzaSize& pizzasize) {
    pizzasize_repo.PizzaSizeToFile(pizzasize);
}

vector<PizzaSize> PizzaSizeService::retrieve_pizza_sizes() {
    vector<PizzaSize> pizzasize = pizzasize_repo.retrieve_pizza_sizes();
    return pizzasize;
}

bool PizzaSizeService::validate_pizza_size(PizzaSize size_pizza)
{
    string size_of_pizza = size_pizza.get_size();
    try
    {
        for(unsigned int i = 0; i < size_of_pizza.length(); i++)
        {
        if(!isalpha(size_of_pizza[i]))
           {
               throw InvalidPizzaSizeEcxeption();
           }

        }
    }
    catch(InvalidPizzaSizeEcxeption e)
    {
        return false;
    }
    return true;
}
