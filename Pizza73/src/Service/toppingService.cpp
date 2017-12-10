    #include "toppingService.h"

toppingService::toppingService()
{
    //ctor
}

void toppingService::add_topping(Topping& topping) {
    topping_repo.add_topping(topping);
   // cout << topping << endl;
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

