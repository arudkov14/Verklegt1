#ifndef PIZZASIZESERVICE_H
#define PIZZASIZESERVICE_H
#include "PizzaSizeRepository.h"

class PizzaSizeService
{
    public:
        PizzaSizeService();
        void PizzaSizeToFile(PizzaSize& pizzasize);
        vector<PizzaSize> retrieve_pizza_sizes();

    private:
        PizzaSizeRepository pizzasize_repo;
};

#endif // PIZZASIZESERVICE_H
