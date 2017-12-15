#include "Order.h"

Order::Order()
{
    name = "Customer";
    total_price = 0;
    payment_status = "Payment pending";

    comment = "No";
}

Order::Order(string name, int total_price, string comment,string payment_status, string order_status, vector<Pizza> pizzas) {

    this->name = name;
    this->pizzas = pizzas;
    this->payment_status = payment_status;
    this->order_status = order_status;
    this->comment = comment;
    this->total_price = total_price;
}

string Order::get_name() {
    return this->name;
}

int Order::get_totalprice() {
    return this-> total_price;
}

vector<Pizza> Order::get_pizzas() {
    return this -> pizzas;
}

string Order::get_comment() {
    return this-> comment;
}

string Order::get_paymenstatus() {
    return this-> payment_status;
}

string Order::get_orderstatus() {
    return this->order_status;
}


ostream& operator << (ostream& out, const Order& order)
{
    out << order.name << ":" << order.total_price << ":" << order.payment_status << ":"
        << order.order_status << ":" << order.comment << ":";

    for ( unsigned int i = 0; i < order.pizzas.size(); i++ ) {
        Pizza pizza = order.pizzas[i];
        if (i != order.pizzas.size() - 1) {
            vector <Topping> toppings = pizza.get_toppings();
            for ( unsigned int i = 0; i < toppings.size(); i++ ) {
                Topping topping = toppings[i];
                if (i != toppings.size() - 1) {
                    out << topping.get_name() << ",";
                }
                else {
                    out << topping.get_name() << ";";
                }
            }
        }
        else {
            vector <Topping> toppings = pizza.get_toppings();
            for ( unsigned int i = 0; i < toppings.size(); i++ ) {
                Topping topping = toppings[i];
                if (i != toppings.size() - 1) {
                    out << topping.get_name() << ",";
                }
                else {
                    out << topping.get_name() << ":";
                }
            }
        }
    }


    return out;
}
