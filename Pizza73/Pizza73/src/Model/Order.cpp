#include "Order.h"

Order::Order()
{
    name = "Customer";
    //Pizzas?
    total_price = 0;
    comment = "No comment";
    payment_status = "Payment pending";
    order_status = "Order pending";
}

Order::Order(string name, vector<Pizza> pizzas, int total_price,
             string comment, string payment_status, string order_status)
{
    this->name = name;
    this->pizzas = pizzas;
    this->total_price = total_price;
    this->comment = comment;
    this->payment_status = payment_status;
    this->order_status = order_status;
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

string Order::get_payment_status() {
    return this-> payment_status;
}

string Order::get_order_status() {
    return this->order_status;
}

ostream& operator << (ostream& out, const Order& order)
{
    out << order.name << ":";

    ///TEST
    out << order.total_price << ":" << order.comment  << ":" << order.payment_status << ":" << order.order_status;



    for(unsigned int i = 0; i < order.pizzas.size(); i++) {
        Pizza pizza = order.pizzas[i];
//      out << pizza.get_size(); << ":"; fæ alltaf villu!!!
        out << pizza.get_price();
        vector<Topping> toppings = pizza.get_toppings();
        for(unsigned int i = 0; i < toppings.size(); i++) {
            Topping topping = toppings[i];
            out << topping.get_name();
        }
        out << order.payment_status << ":" << order.order_status << ":" << order.comment;

    }
    return out;
}
