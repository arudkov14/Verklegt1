#ifndef PIZZASIZESERVICE_H
#define PIZZASIZESERVICE_H
#include "PizzaSizeRepository.h"
#include "InvalidPizzaSizeEcxeption.h"

class PizzaSizeService
{
    public:
        PizzaSizeService();
        void PizzaSizeToFile(PizzaSize& pizzasize);
        void deliverNewVectorToFile(vector<PizzaSize>& newlist);
        bool validate_pizza_size(PizzaSize pizza_size);
        vector<PizzaSize> retrieve_pizza_sizes();
        vector<PizzaSize> new_list(int deltop);

    private:
        PizzaSizeRepository pizzasize_repo;
};

#endif // PIZZASIZESERVICE_H
