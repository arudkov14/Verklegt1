#include "SalesUI.h"

SalesUI::main_menu()
{
    MainUI mainui;
    toppingService topping_service;
    bool continueSales = true;
    char input;
    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Sales UI \t" << endl;
        cout << "============================================" << endl;
        cout << "Enter a choice" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Order pizza" << endl;
        cout << "2: Read pizza" << endl;
        cout << "q: Exit program" << endl;
        cout << "============================================"  << endl;
        cin >> input;

        if(input == '0') {
            mainui.startmainUI();

        } else if (input == '1') {
            vector<Topping> toppingList = topping_service.retrieve_all_toppings();
            Pizza pizza;
            int toppingSelection = -1;
            while (toppingSelection != 0) {
                cout << "Please enter id for toppings (press 0 to quit)" << endl;

                for(unsigned int i = 0; i < toppingList.size(); i++) {
                    cout << "[" << i+1 << "]: " << toppingList[i].get_name() << endl;
                }
                cin >> toppingSelection;

                if(toppingSelection > 0 && toppingSelection <= (int)toppingList.size()) {  /// sko�a betur
                   pizza.add_topping(toppingList[toppingSelection - 1]);
                }
            }
            cout << pizza;
//          pizza_service.pizzaToFile(pizza);

            getch();

        }
        else if (input == '2') {


        }
        else if (input == '3') {


        } else if (input == '4') {


        } else if (input == 'q') {
            exit(0);

        }
    } while (continueSales == true);
}
