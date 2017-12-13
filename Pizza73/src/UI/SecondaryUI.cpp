#include "SecondaryUI.h"

SecondaryUI::SecondaryUI()
{
    continueSales = true;
    continueManager = true;
    continueAddTopping = true;
    continueDrink = true;
    continueAddDrink = true;
    continueBaseEdit = true;
}

/// MANAGER UI ///

/*vector<Topping>SecondaryUI::addToToppings(vector<Topping> toppings)
{
    Topping topping;
    cin >> topping;
    toppings.push_back(topping);

    return toppings;
}*/

/// BAKER MAIN
void SecondaryUI::startbakerUI()
{
    MainUI mainui;
    SecondaryUI secondaryui;
    char input;

    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Baker UI \t" << endl;
        cout << "============================================" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Choose location" << endl;
        cout << "2: Orders " << endl;       /// filtera pantanir út frá staðsetningu
        cout << "q: Exit program" << endl;
        cout << "============================================"  << endl;
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

            break;
        case '4':

            break;
        case 'q':
            exit(0);
        }
    } while(input != 'q');

}
/// BAKER - location
void SecondaryUI::locationui()
{
    MainUI mainui;
    SecondaryUI secondaryui;
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
            secondaryui.ordersui();
            break;
        case 'q':
            exit(0);
        }
    } while (input != 'q');
}

/// BAKER - orders
void SecondaryUI::ordersui() /// skoða betur uppröðun á undirflokkum

{
    MainUI mainui;
    SecondaryUI secondaryui;
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
        cout << "3: List of all orders" << endl;                    /// merkja pantanir í vinnslu eða tilbúnar
        cout << "4: Search for order number" << endl;               /// bæta við í pizza class
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
            /// List of all orders -> möguleiki á að breyta status
            break;
        case '4':
            /// search for order number -> möguleiki á að breyta status
            break;
        case 'q':
            exit(0);
        }
        // default  - bæta við exception

    } while (input != 'q');
}

void SecondaryUI::pizzapriceui() {

    MainUI mainui;
    SecondaryUI secondaryui;
    char input;
    do {
            system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Manager UI \t" << endl;
        cout << "============================================" << endl;
        cout << "\t \t Size edit \t" << endl;
        cout << "============================================" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Create size" << endl;
        cout << "2: Size list" << endl;
        cout << "3: List of all orders" << endl;                    /// merkja pantanir í vinnslu eða tilbúnar
        cout << "4: Search for order number" << endl;               /// bæta við í pizza class
        cout << "============================================" << endl;
        cin >> input;


        if (input == '0') {
            mainui.startmainUI();
        }
        else if (input == '1') {
            string size;
            int price;
            cout << "Enter name of size option: ";
            cin >> size;
            cout << "Enter price of option: ";
            cin >> price;
            PizzaSize pizzasize(size, price);
            size_service.PizzaSizeToFile(pizzasize);

            getch();
        }
        else if (input == '2') {
           vector<PizzaSize> pizzasizes = size_service.retrieve_pizza_sizes();
            for(unsigned int i = 0; i < pizzasizes.size(); i++) {
                cout << "Size: " << pizzasizes[i].get_size() << endl;
                cout << "Price: " << pizzasizes[i].get_price() << endl;
            }
            getch();
        }
        else if (input == 'q') {
            exit(0);
        }




    }while(continueBaseEdit == true);
}


/// MANAGER MAIN
void SecondaryUI::startmanagerUI()
{
    MainUI mainui;
    SecondaryUI secondaryui;
    char input;
    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Manager UI \t" << endl;
        cout << "============================================" << endl;
        cout << "Enter a choice" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Toppings" << endl;
        cout << "2: Drinks" << endl;
        cout << "3: Edit base price" << endl;                       /// vantar UI
        cout << "q: Quit" << endl;
        cout << "============================================"  << endl;

        cin >> input;

        switch(input) {

        case '0':
            mainui.startmainUI();
            break;
        case '1':
            secondaryui.toppingui();
            break;
        case '2':
            secondaryui.drinkui();
            break;
        case '3':
            secondaryui.pizzapriceui();
            break;
        case 'q':
            exit (0);
            break;
        }
    } while(continueSales == true);
}

/// TOPPING - TEXT ONLY
void printtoppingui()
{
    cout << "============================================" << endl;
    cout << "\t \t Manager UI \t" << endl;
    cout << "============================================" << endl;
    cout << "\t \t toppings \t" << endl;
    cout << "============================================" << endl;
}

/// topping - menu choice 1
void SecondaryUI::toppingMenuOne()
{
    vector<Topping> toppings = topping_service.retrieve_all_toppings();
    for(unsigned int i = 0; i < toppings.size(); i++) {
        cout  << "[" << i+1 << "]: " << left  << setw(22) << toppings[i].get_name();
        cout << right << setw(10) << "price: " << toppings[i].get_price() << "kr." << endl;
    }
    cout << endl;
}

/// topping - menu choice 2
void SecondaryUI::toppingMenuTwo() {
    char choice = 'y';
    while(continueAddTopping == true) {
        system("CLS");
        printtoppingui();
        cout << "Add a topping (y/n)? " << endl;    /// bæta við add ANOTHER topping eftir fyrsta val.
        cin >> choice;
        if (choice == 'y') {
            Topping toppings;
            cin >> toppings;
            topping_service.add_topping(toppings);
            cout << "Topping has been saved";   /// færa staðfestingu í validate
            getch();
            system("CLS");
            cout << endl;
        } else if (choice == 'n') {
            choice = 'n';
            break;
        }
    }
}

/// topping - menu choice 3 - delete
void SecondaryUI::toppingMenuThree()
{
    int toppingToDelete;
    vector<Topping> toppings = topping_service.retrieve_all_toppings();
        for(unsigned int i = 0; i < toppings.size(); i++) {
            cout << "Topping[" << i+1 << "]: " << toppings[i].get_name() << "\t";
            cout << "price: " << toppings[i].get_price() << "kr." << endl;
        }
    cin >> toppingToDelete;
    vector<Topping> NewToppingList = topping_service.NewList(toppingToDelete);
    topping_service.deliverNewVectorToFile(NewToppingList);
    cout << "Topping[" << toppingToDelete << "]: " << toppings[toppingToDelete-1].get_name() << ", has been deleted" << endl;
    cout << "enter topping to delete: " << endl;
}

/// TOPPING -  MAIN
void SecondaryUI::toppingui()
{
    MainUI mainui;
    SecondaryUI secondaryui;
    char input;
    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Manager UI \t" << endl;
        cout << "============================================" << endl;
        cout << "\t \t toppings \t" << endl;
        cout << "============================================" << endl;
        cout << "Enter a choice" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Read topping list" << endl;
        cout << "2: Add topping to menu" << endl;
        cout << "3: delete topping from menu" << endl;
        cout << "4: change topping price" << endl;
        cout << "q: Quit" << endl;
        cout << "============================================"  << endl;
        cin >> input;



        if(input == '0') {
            mainui.startmainUI();
        } else if (input == '1') {
            toppingMenuOne();
            getch();
        } else if(input == '2') {
            toppingMenuTwo();
        } else if (input == '3') {
            toppingMenuThree();
            getch();
        }
        else if (input == 'q') {
            exit(0);
        }

    } while(continueSales == true);
}


/// DRINK - TEXT ONLY
void printdrinkui()
{
    cout << "============================================" << endl;
    cout << "\t \t Manager UI \t" << endl;
    cout << "============================================" << endl;
    cout << "\t \t drinks \t" << endl;
    cout << "============================================" << endl;
}

/// DRINK - MENU CHOICE 1

void SecondaryUI::drinkMenuOne () {

    vector<Drink> drinks_from_menu = drink_service.retrieve_all_drinks();

    for (unsigned int i = 0; i < drinks_from_menu.size(); i++) {
        cout << "Brand: " << drinks_from_menu[i].get_brand() << endl;
        cout << "Size: " << drinks_from_menu[i].get_size() << "L" << endl;
        cout << "Price: " << drinks_from_menu[i].get_price() << "Kr" << endl;
        cout << endl;
    }

}


/// DRINK - MAIN
void SecondaryUI::drinkui()
{
    MainUI mainui;
    SecondaryUI secondaryui;
    char input;
    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Manager UI \t" << endl;
        cout << "============================================" << endl;
        cout << "\t \t drinks \t" << endl;
        cout << "============================================" << endl;
        cout << "Enter a choice" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Read drink list" << endl;
        cout << "2: Add drinks to menu" << endl;
        cout << "3: Delete drink from menu" << endl;
        cout << "4: Change drink price" << endl;
        cout << "q: Quit" << endl;
        cout << "============================================"  << endl;
        cin >> input;

        if(input == '0') {
            mainui.startmainUI();
        }

        else if (input == '1'){
            secondaryui.drinkMenuOne();

            getch();
        }

        else if(input == '2') {
            char choice = 'y';
            while(continueAddDrink == true) {
                system("CLS");
                printdrinkui();
                cout << "Add another drink (y/n)? ";
                cin >> choice;
                if (choice == 'y') {
                    Drink drinks;
                    cin >> drinks;
                    drink_service.add_drink(drinks);
                    cout << "Drink has been saved";   /// færa staðfestingu í validate
                    getch();
                    system("CLS");
                    cout << endl;
                } else if (choice == 'n') {
                    choice = 'n';
                    break;
                }
            }
        } else if (input == 'q') {
            exit(0);
        }

    } while(continueDrink == true);
}

/// SALES - MAIN

/// DELIVERY - MAIN
void SecondaryUI::startdeliveryUI()
{
    MainUI mainui;
    SecondaryUI secondaryui;
    char input;
    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Delivery UI \t" << endl;
        cout << "============================================" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Choose location" << endl;
        cout << "2: All orders at *chosen location" << endl;
        cout << "3: Ready orders" << endl;
        cout << "4: Search for order number" << endl;
        cout << "q: Exit program" << endl;
        cout << "============================================"  << endl;

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

            break;
        case '4':

            break;
        case 'q':
            exit(0);
        }

    } while(input != 'q');
}


