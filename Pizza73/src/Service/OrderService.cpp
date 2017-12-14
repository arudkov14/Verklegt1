#include "OrderService.h"

OrderService::OrderService()
{
    //ctor
}

void OrderService::add_order(Order& order)
{
    order_repo.add_order(order);
}

vector<Order> OrderService::retrieve_all_orders()
{
   // return order_repo.retrieve_all_orders();
}
