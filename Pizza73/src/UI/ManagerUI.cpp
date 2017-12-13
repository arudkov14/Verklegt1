#include "ManagerUI.h"

///MANAGER - MAIN
ManagerUI::main_menu()
{
    MainUI mainui;
    bool continueManager = true;
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
        cout << "3: Add locations" << endl;                       /// vantar UI
        cout << "q: Quit" << endl;
        cout << "============================================"  << endl;

        cin >> input;

        switch(input) {

        case '0':
            mainui.startmainUI();
            break;
        case '1':
            topping_ui();
            break;
        case '2':
            drink_ui();
            break;
        case '3':
            /// add locations
            break;
        case 'q':
            exit (0);
            break;
        }
    } while(continueManager == true);
}

/// DRINK - MAIN
void ManagerUI::drink_ui()
{
    MainUI mainui;
    bool continueAddDrink = true;
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
            read_drinks();
            getch();
        }

        else if(input == '2') {
            char choice = 'y';
            while(continueAddDrink == true) {
                system("CLS");
                print_drink_ui();
                cout << "Add another drink (y/n)? ";
                cin >> choice;
                if (choice == 'y') {
                    Drink drinks;
                    cin >> drinks;

                    validate_drinks(drinks);

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

    } while(continueAddDrink == true);
}

/// DRINK - 1: Read drinks
void ManagerUI::read_drinks() {

    DrinkService drink_service;

    vector<Drink> drinks_from_menu = drink_service.retrieve_all_drinks();

    for (unsigned int i = 0; i < drinks_from_menu.size(); i++) {
        cout << "Brand: " << drinks_from_menu[i].get_brand() << endl;
        cout << "Size: " << drinks_from_menu[i].get_size() << "L" << endl;
        cout << "Price: " << drinks_from_menu[i].get_price() << "Kr" << endl;
        cout << endl;
    }
}

/// DRINK - UI TEXT ONLY
void ManagerUI::print_drink_ui()
{
    cout << "============================================" << endl;
    cout << "\t \t Manager UI \t" << endl;
    cout << "============================================" << endl;
    cout << "\t \t drinks \t" << endl;
    cout << "============================================" << endl;
}

/// VALIDATE DRINKS
void ManagerUI::validate_drinks(Drink& drinks)
{
    DrinkService drink_service;

    if(!drink_service.drink_brand(drinks))
    {
       cout << "Brand name can't include numbers ";
    }
    else if(!drink_service.drink_size(drinks))
    {
        cout << "Size can only be 0.5, 1, 2 and can´t include letters ";
    }
    else if(!drink_service.drink_price(drinks))
    {
        cout << "Price should be positive number";
    }
    else
    {
        drink_service.add_drink(drinks);
        cout << "Drink has been saved";
    }
}

/// TOPPING - MAIN
void ManagerUI::topping_ui()
{
    MainUI mainui;
    bool continueSales = true;
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
            read_toppings();
            getch();
        } else if(input == '2') {


              add_toppings();

        } else if (input == '3') {

            add_toppings();
        } else if (input == '3') {
            delete_topping();
            getch();
        }
        else if (input == 'q') {
            exit(0);
        }

    } while(continueSales == true);
}

/// Topping - 1: Read toppings
void ManagerUI::read_toppings()
{
    toppingService topping_service;

    vector<Topping> toppings = topping_service.retrieve_all_toppings();
    for(unsigned int i = 0; i < toppings.size(); i++) {
        cout  << "[" << i+1 << "]: " << left  << setw(22) << toppings[i].get_name();
        cout << right << setw(10) << "price: " << toppings[i].get_price() << "kr." << endl;
    }
    cout << endl;
}

/// Topping - 2: Add toppings
void ManagerUI::add_toppings() {

    char choice = 'y';
    bool continueAddTopping = true;
    toppingService topping_service;

    while(continueAddTopping == true) {
        system("CLS");
        print_topping_ui();
        cout << "Add a topping (y/n)? " << endl;    /// b�ta vi� add ANOTHER topping eftir fyrsta val.
        cin >> choice;
        if (choice == 'y') {
            Topping toppings;
            cin >> toppings;
            validate_toppings(toppings);   /// f�ra sta�festingu � validate
            getch();
            system("CLS");
            cout << endl;
        } else if (choice == 'n') {
            choice = 'n';
            break;
        }
    }
}

/// Topping - 3: Delete topping
void ManagerUI::delete_topping()
{
    toppingService topping_service;
    int toppingToDelete;

    vector<Topping> toppings = topping_service.retrieve_all_toppings();
        for(unsigned int i = 0; i < toppings.size(); i++) {
            cout << "Topping[" << i+1 << "]: " << toppings[i].get_name() << "\t";
            cout << "price: " << toppings[i].get_price() << "kr." << endl;
        }
    cout << "enter topping to delete: " << endl;
    cin >> toppingToDelete;
    vector<Topping> NewToppingList = topping_service.NewList(toppingToDelete);
    topping_service.deliverNewVectorToFile(NewToppingList);

    cout << "Topping[" << toppingToDelete-1 << "]: " << toppings[toppingToDelete-1].get_name() << ", has been deleted" << endl;


}

/// TOPPING - TEXT ONLY
void ManagerUI::print_topping_ui()
{
    cout << "============================================" << endl;
    cout << "\t \t Manager UI \t" << endl;
    cout << "============================================" << endl;
    cout << "\t \t toppings \t" << endl;
    cout << "============================================" << endl;
}

/// VALIDATE TOPPINGS
void ManagerUI::validate_toppings(Topping& toppings)
{
    toppingService topping_service;

     if(!topping_service.topping_name(toppings))
        {
            cout << "Name supposed to contain only letters";
        }
        else if(!topping_service.topping_price(toppings))
        {
            cout << "Price needs to be positive numbers";
        }
        else
        {
            topping_service.add_topping(toppings);
            cout << "Topping has been saved";
        }
}
