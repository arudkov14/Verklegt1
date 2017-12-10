#ifndef SALESUI_H
#define SALESUI_H
#include <iostream>
#include <vector>
#include <stddef.h>
#include "mainui.h"
#include "PizzaRepository.h"
#include "ToppingRepository.h"

using namespace std;

class SalesUI
{
    public:
        SalesUI();
        virtual ~SalesUI();
        void startUI();


    protected:

    private:
        PizzaRepository pizzaRepo;
        ToppingRepository toppingRepo;
        bool doContinue;

};

#endif // SALESUI_H
