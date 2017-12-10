#include "SecondaryUI.h"

SecondaryUI::SecondaryUI()
{
    continueSales = true;
    continueManager = true;
    continueAddTopping = true;
<<<<<<< HEAD
    continue_add_pizza = true;
=======
>>>>>>> master
}

/// MANAGER UI ///

<<<<<<< HEAD
=======
/*vector<Topping>SecondaryUI::addToToppings(vector<Topping> toppings)
{
    Topping topping;
    cin >> topping;
    toppings.push_back(topping);

    return toppings;
}*/

>>>>>>> master
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
<<<<<<< HEAD
        cout << "1; Pizzas" << endl;
        cout << "2: Toppings" << endl;
        cout << "3: Add other products" << endl;                  /// vantar UI
        cout << "4: Add locations" << endl;                       /// vantar UI
=======
        cout << "1: Toppings" << endl;
        cout << "2: Add other products" << endl;                  /// vantar UI
        cout << "3: Add locations" << endl;                       /// vantar UI
>>>>>>> master
        cout << "q: Quit" << endl;
        cout << "============================================"  << endl;

        cin >> input;

        switch(input) {

        case '0':
            mainui.startmainUI();
            break;
        case '1':
<<<<<<< HEAD
            secondaryui.add_pizza();
            break;
        case '2':
            secondaryui.toppingui();
            break;
        case '3':
           secondaryui.show_all_pizzas();
=======
            secondaryui.toppingui();
            break;
        case '2':
            /// add other products
            break;
        case '3':
            /// add locations
>>>>>>> master
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

<<<<<<< HEAD
void SecondaryUI::add_pizza()
{
    MainUI mainui;
    SecondaryUI secondaryui;

        char choice = 'y';
            while(continue_add_pizza == true)
                {
                system("CLS");
                cout << "Add another Pizza (y/n)? ";
                cin >> choice;
                if (choice == 'y')
                {
                    Pizza pizza;
                    cin >> pizza;
                    pizza_service.add_pizza(pizza);
                    cout << "Pizza has been saved";   /// færa staðfestingu í validate
                    getch();
                    system("CLS");
                    cout << endl;

                }
                else if (choice == 'n')
                {
                    choice = 'n';
                    break;
                }
                }
}

void SecondaryUI::show_all_pizzas()
{
         vector<Pizza> all_pizzas = pizza_service.retrive_all_pizza();

                    for(unsigned int i = 0; i < all_pizzas.size(); i++)
                    {
                        cout << "Pizza[" << i+1 << "]: " << all_pizzas[i].get_pizza_name() << " ";
                        cout << "Number of Toppings: " << all_pizzas[i].get_topping_count() << " ";
                        cout << "Size (in inches): " << all_pizzas[i].get_pizza_size() << " ";
                        cout << "Price: " << all_pizzas[i].get_base_pizza_price();
                        cout << endl;
                    }
                    getch();

}

=======
>>>>>>> master
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

<<<<<<< HEAD
=======
/*       switch(input) {

       case '0':
           mainui.startmainUI();
           break;
       case '1':
           /// Read topping list
           break;
       case '2':
           /// Add topping to menu
           break;

       case '3':
           /// delete topping from menu
           break;
       case '4':
           /// change topping price
           break;
       case 'q':
           exit (0);
           break;
       }*/

>>>>>>> master
        if(input == '0') {
            mainui.startmainUI();


        }
        else if (input == '1'){



        }
<<<<<<< HEAD
        else if(input == '2')
            {
=======
        else if(input == '2') {
>>>>>>> master
            char choice = 'y';
            while(continueAddTopping == true) {
                system("CLS");
                printtoppingui();
                cout << "Add another topping (y/n)? ";
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
        } else if (input == 'q') {
            exit(0);
        }
    } while(continueSales == true);
}

/// SALESS - MAIN
void SecondaryUI::startsalesUI()
{
    MainUI mainui;
    SecondaryUI secondaryui;
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

<<<<<<< HEAD
        if(input == '0')
        {
            mainui.startmainUI();


        }
        else if (input == '1')
        {

        }
        else if(input == '2')
        {

        }
        else if (input == 'q')
        {
            exit(0);
        }
    } while(continueSales == true);
=======
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
>>>>>>> master
}
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

<<<<<<< HEAD
=======
/*
if (input == '1') {

    vector<Topping> toppings = topping_service.retrieve_all_toppings();

    cout << toppings[0];



}
else if (input == '2') {
    Topping toppings;
    cin >> toppings;
    topping_service.add_topping(toppings);
}
else if (input == 'q') {
    exit (0);


}
//validate_input(input);


} while(continueManager == true);
*/

/*
void SecondaryUI::validate_input(char& input)
{

    if(input == '1') {

    }

    else if (input == '2') {
        char input = 'y';
        vector<Topping> toppings;
        while (input == 'y') {
            cout << endl;
            cout << "Enter new topping (y/n)?";
            cin >> input;
            if(input == 'y') {
            //    addToToppings(toppings);
            }
            else {
                break;
            }
        }
        cout << "kemur ad mer?" << endl;
//        topping_service.add_topping(toppings); /// veldur óendanlegri loopu. Skrifar á fullt inn í texta skjal núllstilltar toppings
    }
    else if (input == '3') {
        MainUI mainui;
        mainui.startmainUI();
    }
    else if (input == 'q') {
        exit (0);
    }

}
*/

>>>>>>> master
