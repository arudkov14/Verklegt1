#ifndef ORDER_H
#define ORDER_H
#include "Pizza.h"
#include <vector>
using namespace std;
#include <iostream>
#include "PizzaSize.h"


class Order
{
    public:
        Order();
        Order(string name, vector<Pizza> pizzas, int total_price,
              string comment, string payment_status, string order_status);

        friend ostream& operator << (ostream& out, const Order& order);
        friend istream& operator >> (istream& in, Order& order);

        vector<Pizza> get_pizzas();
        string get_name();
        int get_totalprice();
        string get_comment();
        string get_payment_status();
        string get_order_status();

    private:
        vector<Pizza> pizzas;
        string name;
        int total_price;
        string comment;
        string payment_status;
        string order_status;
};

#endif // ORDER_H
