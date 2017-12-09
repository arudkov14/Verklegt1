    #include "toppingService.h"

toppingService::toppingService()
{
    //ctor
}

void toppingService::add_topping(Topping& topping) {

    topping_repo.add_topping(topping);
   // cout << topping << endl;
}


vector<Topping> toppingService::retrieve_all_toppings() {

   return topping_repo.retrieve_all_toppings();

}
