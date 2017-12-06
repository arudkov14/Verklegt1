#include "../../include/UI/mainui.h"
#include "../../include/UI/salesui.h"
#include "../../include/UI/managerui.h"

#include <cstdlib>



MainUI::MainUI()
{
    doContinue = true;
}

void MainUI::startUI()
{


    char choice;




    do {

        cout << "============================" << endl;
        cout << "====\t Pizza73 \t====" << endl;
        cout << "============================" << endl;

        cout << endl;
        cout << "1: Sales" << endl;
        cout << "2: Manager" << endl;
        cout << "q: Exit program" << endl;
        cout << "============================"  << endl;
        cin >> choice;

        if (choice == '1') {
            SalesUI salesui;
            salesui.startUI();
        } else if(choice == '2') {
            ManagerUI managerui;
            managerui.startUI();

        } else if(choice == 'q') {
            exit (0);

        }

    } while(doContinue == true);





}


MainUI::~MainUI()
{
    //dtor
}
