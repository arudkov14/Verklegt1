#ifndef MAINUI_H
#define MAINUI_H
#include "SecondaryUI.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>

#include "SalesUI.h"

using namespace std;
#include "SalesUI.h"
#include "ManagerUI.h"

class MainUI
{
    public:
        MainUI();
        void startmainUI();

    private:
        bool doContinue;

};

#endif // MAINUI_H
