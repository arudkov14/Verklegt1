#include "Order.h"

Order::Order()
{
    name = "Customer";
    total_price = 0;
    payment_status = "Payment pending";
    delivery_status = "Delivery pending";
    comment = "No";
}

Order::Order(string name, int total_price, string comment,string order_status, string delivery, vector<Pizza> pizzas) {

    this->name = name;
    this->pizzas = pizzas;
    this->payment_status = payment_status;
    this->delivery_status = delivery_status;
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

string Order::get_deliverystatus() {
    return this->delivery_status;
}

ostream& operator << (ostream& out, const Order& order)
{
    out << order.name << ":";

    for(unsigned int i = 0; i < order.pizzas.size(); i++) {
        Pizza pizza = order.pizzas[i];
        out << pizza;
        vector<Topping> toppings = pizza.get_toppings();
        for(unsigned int i = 0; i < toppings.size(); i++) {
            Topping topping = toppings[i];
            out << topping.get_name();
        }
        out << order.payment_status << ":" << order.order_status << ":"
            << order.delivery_status << ":" << order.comment;

    }
    return out;
}
