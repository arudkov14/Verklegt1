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
        continueSales = true;
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
            continueSales = false;


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
//    int pizza_price;
    PizzaSize pizzasize;
    vector<Pizza> pizzas;

    string name = "";
    string comment = "";
    string payment_status = "";
    string order_status = "Order received";
    string delivery_status = "";
    int total_price;
    Order thisorder;

    char input;
    do {
        system("CLS");
        continueOrder = true;
        cout << "============================================" << endl;
        cout << "\t \t Orders \t" << endl;
        cout << "============================================" << endl;
        cout << "Enter a choice" << endl;
        cout << "0: Back to main" << endl;
        cout << "1: Order Pizza" << endl;
  //    cout << "2: add beverage" << endl;
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
        }
        else if (input == '2') {

        }else if (input == '3') {
            total_price = get_total_pizza_price(pizzas);
            name = get_name();
            comment = get_comment();
            cout << "Total amount for you order: " << total_price << "kr" << endl;
            getch();
            payment_status = get_paymenstat();
            thisorder = Order(name, total_price,payment_status, comment, order_status, pizzas );
            order_service.add_order(thisorder);
            continueOrder = false;
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
    PizzaSize pizzasize;
    vector<Topping> pizzatoppings;

    char input;
    do {

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
            topping_price = get_topping_price(pizzatoppings); /// má mögulega taka út
            pizza = Pizza(pizzatoppings, topping_price, pizzasize);
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
/// FINISH ORDER - GET TOTAL PRICE
int SalesUI::get_total_pizza_price(vector<Pizza> pizzas) {
    int TotalPrice = 0;

    for(unsigned int i = 0; i < pizzas.size(); i++) {
        PizzaSize thispizzasize = pizzas[i].get_size();
        TotalPrice += pizzas[i].get_price();
        TotalPrice += thispizzasize.get_price();
        }
    return TotalPrice;

}




/// FINISH ORDER - GET NAME
string SalesUI::get_name() {
    string nameORnumber;
    system("CLS");
    cout << "============================================" << endl;
    cout << "\t \t Finish Order \t" << endl;
    cout << "============================================" << endl;
    cout << "Enter phonenumber" << endl;
    cin >> nameORnumber;

    return nameORnumber;

}


/// FINISH ORDER - GET COMMENT
string SalesUI::get_comment() {
    string comment;
    string temp;
    char input;

    while(input != '1' || input != '2') {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Finish Order \t" << endl;
        cout << "============================================" << endl;
        cout << "Do you want to add a comment to your order?" << endl;
        cout << "[1] yes" << endl;
        cout << "[2] no" << endl;
        cin >> input;
        getline(cin, temp);

        if(input == '1') {
            cout << "comment: ";
            getline(cin, comment);
            break;
        }
        else if(input == '2') {
            comment = "Standard order";
            break;
        }
        else if(input != '1' || input != '2') {
            cout << "Wrong input, please try again." << endl;


        }
    }

return comment;
}

/// FINISH ORDER - GET ORDER Stat
string SalesUI::get_orderstat() {
    string orderstat;
    char input;

    while(input != '1' || input != '2' || input != '3' || input != '4') {
        system("CLS");
        cout << "Order Status" << endl;
        cout << "[1] Order received" << endl;
        cout << "[2] Preparing order" << endl;
        cout << "[3] On the way" << endl;
        cout << "[4] In the oven" << endl;
        cout << "[5] Delivered" << endl;

        cin >> input;
        if(input == '1') {
            orderstat = "Order received";
            break;
        }
        else if(input == '2') {
            orderstat = "Preparin order";
            break;
        }
        else if(input == '3') {
            orderstat = "On the way";
            break;
        }
        else if(input == '4') {
            orderstat = "In the oven";
            break;
        }
        else if(input == '5') {
            orderstat = "Delivered";
            break;
        }
        else if(input != '1' || input != '2' || input != '3' || input != '4' || input != '5' ) {
            cout << "Wrong input, please try agin." << endl;
            getch();
        }
    }

    return orderstat;

}



/// FINISH ORDER - GET PAYMENT
string SalesUI::get_paymenstat() {
    string paystat;
    char input;

    while(input != '1' && input != '2') {
        system("CLS");
        cout << "============================================" << endl;
        cout << "\t \t Finish order \t" << endl;
        cout << "============================================" << endl;
        cout << "Payment Options" << endl;
        cout << "[1] Pay now" << endl;
        cout << "[2] Pay on pickup" << endl;

        cin >> input;

        if(input == '1') {
            paystat = "Payment received";
        }
        else if(input == '2') {
            paystat = "Payment pending";
        }
        else if(input != '1' || input != '2') {
            cout << "Wrong input, please try agin." << endl;
            getch();
        }
    }

    return paystat;
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
        cout << "============================================" << endl;
        cout << "\t \t Fill out order \t" << endl;
        cout << "============================================" << endl;
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
    cout << "============================================" << endl;
    cout << "\t \t Fill out order \t" << endl;
    cout << "============================================" << endl;
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
