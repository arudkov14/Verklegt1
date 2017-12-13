#include "SalesUI.h"


SalesUI::SalesUI()
{
    continueSales = true;
    continuePizzaOrder = true;
    continueOrder = true;
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
       // cout << "2: Read pizza" << endl;
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

} else if (input == 'q') {
            exit(0);

        }
    } while (continueSales == true);


}

/// UI til að fylla inn í Order.

void SalesUI::startorderUI() {
    MainUI mainui;
    SalesUI salesui;

    Pizza pizza;
    int pizza_price;
    PizzaSize pizzasize;
    vector<Pizza> pizzas;

    char input;
    do {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Orders \t" << endl;
        cout << "============================================" << endl;
        cout << "Enter a choice" << endl;
        cout << "0: back to main" << endl;
        cout << "1: Order Pizza" << endl;
        cout << "2: add beverage" << endl;
        cout << "3: Finish order" << endl;
        cout << "q: Exit program" << endl;
        cout << "============================================"  << endl;
        cin >> input;

        if(input == '0') {
            mainui.startmainUI();
        }
        else if (input == '1') {
            pizza = get_pizza();        /// þetta kallar á "UI" sem fyllir í pizza breyturnar. Fullt af auka föllum.
            pizzas.push_back(pizza);
            break;

        }
        else if (input == '2') {
            cout << "hvar er ég 2" << endl;
            getch();
        }
        else if (input == '3') {


        }
         else if (input == 'q') {
            exit(0);

        }
    } while (continueOrder == true);

}


/// Main UI til að fylla í pizza
Pizza SalesUI::get_pizza() {

    MainUI mainui;
    SalesUI salesui;

    Pizza pizza;
    int size_price = 0;
    int topping_price = 0;
    int total_price = 0;
    PizzaSize pizzasize;
    vector<Topping> pizzatoppings;

    char input;
    do {
        continueOrder = true;
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Pizza Pizza \t" << endl;
        cout << "============================================" << endl;
        cout << "Enter a choice" << endl;
        cout << "1: Make your own pizza" << endl;
        cout << "2: Choose from menu" << endl;
        cout << "q: Exit program" << endl;
        cout << "============================================"  << endl;
        cin >> input;

        if(input == '1') {
            continuePizzaOrder = true;
            pizzatoppings = get_toppings();
            pizzasize = get_pizzasize();
            pizza = Pizza(pizzatoppings, total_price, pizzasize);

            topping_price = get_topping_price(pizzatoppings); /// má mögulega taka út
            size_price = get_size_price(pizzasize);
            total_price = topping_price + size_price;
            break;

        }
        else if (input == '2') {

        }
        else if (input == '3') {
            getch();
        }
        else if (input == 'q') {
            exit(0);
        }
    } while (continueOrder == true);


    return pizza;

}

/// Partur af Pizza ui. Fyllir í vector<toppings> breytuna.
vector<Topping> SalesUI::get_toppings() {

    system("CLS");
    int selection;
    vector<Topping> pizzatoppings = topping_service.retrieve_all_toppings();
    vector<Topping> usertoppings;
    int toppingcount = pizzatoppings.size();
    while (continuePizzaOrder == true) {
        system("CLS");
        cout << "Choose toppings: " << endl;
        for(unsigned int i = 0; i < pizzatoppings.size(); i++) {
            cout << "[" << i+1 << "] " << pizzatoppings[i].get_name() << " - " << pizzatoppings[i].get_price() << endl;
        }
        cin >> selection;
        if(selection > 0 && selection <= toppingcount) {
            usertoppings.push_back(pizzatoppings[selection-1]);
        }
        else if(selection == 0) {
            cout << "Ordered toppings: " << endl;
            int topprice = 0;
            for (unsigned int i = 0; i < usertoppings.size(); i++) {
                cout << usertoppings[i].get_name() << " , ";
                topprice += usertoppings[i].get_price();
            }
            cout << topprice << "kr";
            getch();
            continuePizzaOrder = false;
        }else {
            cout << "Wrong input, try again" << endl;
            continue;
        }
    }
    return usertoppings;

}

/// Partur af Pizza ui. Fyllir í SIZE  breytuna.
PizzaSize SalesUI::get_pizzasize() {

    system("CLS");
    int selection = 0;
    vector<PizzaSize> pizzasizes = size_service.retrieve_pizza_sizes();
    PizzaSize usersize;
    int sizeCount = pizzasizes.size();

    cout << "Choose size: " << endl;
    for(    int i = 0; i < sizeCount; i++) {
        cout << "size options: " << "[" << i+1 << "] " << pizzasizes[i].get_size() << endl;
    }
    cin >> selection;
    if(selection > 0 && selection <= sizeCount-1) {
        usersize = pizzasizes[selection-1];
    }
    return usersize;
}

/// fall til að sækja topping price á þessari pizzu.
int SalesUI::get_topping_price(vector<Topping> toppings) {
    int totalprice = 0;
    for(unsigned int i = 0; i < toppings.size(); i++) {
        totalprice += toppings[i].get_price();
    }

    return totalprice;
}

/// fall til að sækja Size price á þessari pizzu.
int SalesUI::get_size_price(PizzaSize pizzasize) {
    int sizeprice = pizzasize.get_price();

    return sizeprice;

}
