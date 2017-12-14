#include "MainUI.h"

MainUI::MainUI()
{
    doContinue = true;
}

void MainUI::startmainUI()
{
    ManagerUI managerui;
    SalesUI salesui;

    char input;
    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Pizza 73 \t" << endl;
        cout << "============================================" << endl;
        cout << "1: Sales" << endl;
        cout << "2: Manager" << endl;
        cout << "3: Baker" << endl;
        cout << "4: Delivery" << endl;
        cout << "q: Exit program" << endl;
        cout << "============================================"  << endl;
        cin >> input;

        switch (input)
        {
        case '1':
            salesui.startsalesUI();
            break;
        case '2':
            managerui.main_menu();
            break;
        case '3':

            break;
        case '4':
            //secondaryui.startdeliveryUI();
            break;
        case 'q':
            exit(0);
        }

    } while(input != 'q');
}

