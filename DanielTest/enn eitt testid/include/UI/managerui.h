#ifndef MANAGERUI_H
#define MANAGERUI_H
#include <iostream>
#include <vector>
#include <stddef.h>
#include "mainui.h"

class ManagerUI
{
public:
    ManagerUI();
    virtual ~ManagerUI();
    void startUI();

protected:

private:
    PizzaRepository pizzaRepo;
    ToppingRepository toppingRepo;
    bool doContinue;
};

#endif // MANAGERUI_H
