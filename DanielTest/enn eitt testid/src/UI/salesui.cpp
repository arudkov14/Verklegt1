#include "../../include/UI/salesui.h"
#include "../../include/UI/managerui.h"
#include "../../include/UI/mainui.h"

#include <cstdio>




SalesUI::SalesUI()
{
    doContinue = true;
}

void SalesUI::startUI()
{

    char choice;


    do {

        cout << "============================" << endl;
        cout << "====\t Manager UI \t====" << endl;
        cout << "============================" << endl;
        cout << "Enter a choice" << endl;
        cout << "1: Order pizza" << endl;
        cout << "2: Read pizza" << endl;
        cout << "3: Back to Main UI" << endl;
        cout << "q: Exit program" << endl;

        cout << "============================"  << endl;

        cin >> choice;

        if(choice == '1') {
            vector<Topping> toppings = toppingRepo.retrieveAllToppings();

            Pizza pizza;

            int toppingSelection = -1;
            while(toppingSelection != 0) {
                cout << "----------------------------"  << endl;
                cout << "Pick topping from list (0 for no more)" << endl;
                cout << "----------------------------"  << endl;

                for(unsigned int i = 0; i < toppings.size(); i++) {
                    cout << "[" << i+1 << "]" << toppings[i] << endl;
                }
                cin >> toppingSelection;

                if(toppingSelection > 0 && toppingSelection <= (int)toppings.size()) {
                    pizza.addTopping(toppings[toppingSelection - 1]);
                }

                pizzaRepo.storePizza(pizza);

                cout << endl;

            }
        } else if (choice == '2') {
            Pizza pizza = pizzaRepo.retrievePizza();
            cout << pizza;
            cout << endl;

        }

        else if (choice == '3') {
            MainUI mainui;
            mainui.startUI();
        }

        else if ( choice == 'q') {

            exit (0);


        }



    } while(doContinue == true);
}



SalesUI::~SalesUI()
{
    //dtor
}
