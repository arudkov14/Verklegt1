#include "SalesUI.h"


SalesUI::SalesUI()
{
    continueSales = true;
    continuePizzaOrder = true;
}
void SalesUI::startsalesUI()
{
    MainUI mainui;
    SalesUI salesui;

    char input;
    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Sales UI \t" << endl;
        cout << "============================================" << endl;
        cout << "Enter a choice" << endl;
        cout << "0: Back to Main Menu" << endl;
        cout << "1: Create Order" << endl;
        cout << "2: Read pizza" << endl;
        cout << "q: Exit program" << endl;
        cout << "============================================"  << endl;
        cin >> input;

        if(input == '0') {
            mainui.startmainUI();

        } else if (input == '1') {
            salesui.startorderUI();

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

void SalesUI::startorderUI() {
    MainUI mainui;
    char input;
    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Order UI \t" << endl;
        cout << "============================================" << endl;
        cout << "Enter a choice" << endl;
        cout << "0: Back to main menu" << endl;
        cout << "1: Order pizza" << endl;
        cout << "2: Read pizza" << endl;
        cout << "q: Exit program" << endl;
        cout << "============================================"  << endl;
        cin >> input;

        if(input == '0') {
                mainui.startmainUI();
        } else if (input == '1') {

            cout << "Hello World";
            getch();
        }
        else if (input == '2') {


        }
        else if (input == '3') {


        }
         else if (input == 'q') {
            exit(0);

        }
    } while (continueSales == true);




}


vector<Topping> SalesUI::get_pizzatoppings() {
    int selectTopping;
    vector <Topping> toppings = topping_service.retrieve_all_toppings();
    vector <Topping> usertoppings;
    int toppingCount = toppings.size();



    cout << "you chose";

    return usertoppings;

}
