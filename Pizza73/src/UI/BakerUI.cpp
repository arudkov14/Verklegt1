#include "BakerUI.h"

/// BAKER - MAIN
BakerUI::main_menu()
{
    MainUI mainui;
    BakerService baker_service;
    char input;

    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Baker UI \t" << endl;
        cout << "============================================" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Display next order" << endl;
        cout << "q: Exit program" << endl;
        cout << "============================================"  << endl;
        cin >> input;

        if (input == '0') {
            mainui.startmainUI();
        }

        else if (input == '1') {

            vector<string> bakers_orders = baker_service.retrieve_bakers_orders();

            for (unsigned int i = 0; i < bakers_orders.size(); i++) {
                cout << bakers_orders[i] << endl;
                baker_service.next_order(bakers_orders[i]);
                baker_service.delete_order(bakers_orders[i]);
            }

            getch();
        }

        else if (input == 'q') {
            exit(0);
        }
    } while(input != 'q');
}


/*
/// BAKER - LOCATION
void BakerUI::location_ui()
{
    MainUI mainui;
    char input;
    do {
        cout << "============================================" << endl;
        cout << "\t \t BAKER UI \t" << endl;
        cout << "============================================" << endl;
        cout << "\t \t Orders \t" << endl;
        cout << "============================================" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Skeifan" << endl;
        cout << "2: Laugavegur" << endl;
        cout << "3: Orders" << endl;                                ///
        cout << "============================================" << endl;
        cin >> input;

        switch (input) {
        case '0':
            mainui.startmainUI();
            break;
        case '1':

            break;
        case '2':

            break;
        case '3':
            orders_ui();
            break;
        case 'q':
            exit(0);
        }
    } while (input != 'q');
}

/// BAKER - ORDERS
void BakerUI::orders_ui() /// sko�a betur uppr��un � undirflokkum
{
    MainUI mainui;
    char input;
    do {
        cout << "============================================" << endl;
        cout << "\t \t BAKER UI \t" << endl;
        cout << "============================================" << endl;
        cout << "\t \t orders \t" << endl;
        cout << "============================================" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Orders for Skeifan" << endl;
        cout << "2: Orders for Laugavegur" << endl;
        cout << "3: List of all orders" << endl;                    /// merkja pantanir � vinnslu e�a tilb�nar
        cout << "4: Search for order number" << endl;               /// b�ta vi� � pizza class
        cout << "============================================" << endl;
        cin >> input;

        switch (input) {
        case '0':
            mainui.startmainUI();
            break;
        case '1':
            /// vantar UI fyrir skeifan.
            break;
        case '2':
            /// vantar UI fyrir Laugavegur.
            break;
        case '3':
            /// List of all orders -> m�guleiki � a� breyta status
            break;
        case '4':
            /// search for order number -> m�guleiki � a� breyta status
            break;
        case 'q':
            exit(0);
        }
        // default  - b�ta vi� exception

    } while (input != 'q');
}
*/
