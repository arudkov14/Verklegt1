#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include <BasicPizza.h>


class PizzaRepository
{
    public:

    private:
        void store_pizza(const BasicPizza& pizza);
        BasicPizza retrieve_pizza();
};

#endif // PIZZAREPOSITORY_H
