#ifndef MAINUI_H
#define MAINUI_H
#include <iostream>
#include <vector>
#include <stddef.h>
#include "salesui.h"
#include <cstdlib>

using namespace std;

class MainUI
{
public:
    MainUI();
    virtual ~MainUI();
    void startUI();

protected:

private:
    bool doContinue;


};

#endif // MAINUI_H
