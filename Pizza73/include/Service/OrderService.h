#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H
#include "OrderRopository.h"


class OrderService
{
    public:
        OrderService();
        void add_order(Order& order);
        vector<Order> retrieve_all_orders();

    private:
        OrderRopository order_repo;
};

#endif // ORDERSERVICE_H
