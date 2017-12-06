#ifndef TOPPINGREPOSITORY_H
#define TOPPINGREPOSITORY_H
#include "../Models/topping.h"

using namespace std;


class ToppingRepository
{
public:
    ToppingRepository();
    virtual ~ToppingRepository();

    // void storeTopping(const Topping& topping);
    //Topping retrieveTopping();

    void storeAllToppings(const vector<Topping> &toppings);
    vector<Topping> retrieveAllToppings();

protected:


private:
};

#endif // TOPPINGREPOSITORY_H
