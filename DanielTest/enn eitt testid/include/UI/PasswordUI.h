#ifndef PASSWORDUI_H
#define PASSWORDUI_H
#include <string>
using namespace std;
#include <iostream>
#include <stdlib.h>


class PasswordUI
{
    public:
        PasswordUI();

        void access();

    protected:

    private:
        bool doContinue;
        string password_attempt;
};

#endif // PASSWORDUI_H
