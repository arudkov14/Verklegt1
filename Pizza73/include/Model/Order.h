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
        Order(string name, int total_price, string comment, string order_status, vector<Pizza> pizzas);

        friend ostream& operator << (ostream& out, const Order& order);
        friend istream& operator >> (istream& in, Order& order);

        string get_name();
        int get_totalprice();
        vector<Pizza> get_pizzas();
        string get_comment();
        string get_paymenstatus();
        string get_orderstatus();




    private:
        string name;
        int total_price;
        vector<Pizza> pizzas;
        string comment;
        string payment_status;
        string order_status;





};

#endif // ORDER_H
