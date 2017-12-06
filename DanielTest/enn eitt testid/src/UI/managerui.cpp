#include "../../include/UI/managerui.h"



ManagerUI::ManagerUI()
{
    doContinue = true;
}

void ManagerUI::startUI()
{


    char choice;


    do {

        cout << "============================" << endl;
        cout << "====\t Manager UI \t====" << endl;
        cout << "============================" << endl;

        cout << "Enter a choice" << endl;
        cout << "1: Read Topping list" << endl;
        cout << "2: Add topping to menu" << endl;
        cout << "3: Back to Main UI" << endl;
        cout << "q: Quit" << endl;
        cout << "============================"  << endl;
    cout << "============================" << endl;
    cout << "====\t Manager UI \t====" << endl;
    cout << "============================" << endl;
        cin >> choice;

        if(choice == '1') {

            vector<Topping> toppings = toppingRepo.retrieveAllToppings();
            cout << "Current topping list: " << endl;
            for(unsigned int i = 0; i < toppings.size(); i++) {
                cout << "[" << i+1 << "] " << toppings[i] << endl;
            }

            cout << endl;
        } else if (choice == '2') {

            vector<Topping> toppings = toppingRepo.retrieveAllToppings();

            cout << "Current topping list: " << endl;
            for(unsigned int i = 0; i < toppings.size(); i++) {
                cout << "[" << i+1 << "] " << toppings[i] << endl;

            }

            char selection = 'y';
            Topping topping;

            while (selection == 'y') {
                cout << endl;
                cout << "add another topping (y)?";
                cin >> selection;
                if(selection == 'y') {
                    cin >> topping;
                    toppings.push_back(topping);

                }
            }
            toppingRepo.storeAllToppings(toppings);
        } else if (choice == '3') {
            MainUI mainui;
            mainui.startUI();

        }

        else if (choice == 'q') {
            exit (0);
        }


    } while(doContinue == true);
}





ManagerUI::~ManagerUI()
{
    //dtor
}
