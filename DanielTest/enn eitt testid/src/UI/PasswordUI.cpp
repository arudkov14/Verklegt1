#include "PasswordUI.h"
#include "managerui.h"
#include "mainui.h"
#include "salesui.h"

PasswordUI::PasswordUI()
{
    doContinue = true;
    string password_attempt = "";
}




void PasswordUI::access(){


do {
    char user = ' ';
    string password_attempt;


    cout << "Please enter password: ";
    cin >> password_attempt;

        if (user == 'm') {
            if (password_attempt == "manager") {
                ManagerUI managerui;
                managerui.startUI();

            }
            else {
                cout << "Password is incorrect." << endl;
                exit(0);
            }
        }

        if (user == 's') {
            if (password_attempt == "sales") {
                SalesUI salesui;
                salesui.startUI();

            }
            else {
                cout << "Password is incorrect." << endl;
                exit(0);
            }
        }

        if (user == 'b') {
            if (password_attempt == "baker") {
            }
            else {
                cout << "Password is incorrect." << endl;
                exit(0);
            }
        }

        if (user == 'd') {
            if (password_attempt == "delivery") {
            }
            else {
                cout << "Password is incorrect." << endl;
                exit(0);
            }
        }
    } while(doContinue == true);

}
