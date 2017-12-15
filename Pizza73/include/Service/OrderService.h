#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H
#include "OrderRopository.h"


class OrderService
{
    public:
        OrderService();
        void add_order(Order& order);
        void deliverNewVectorToFile(vector<Order>& newlist);
        vector<string> retrieve_all_orders();
        vector<Order> new_list(int deltop);


    private:
        OrderRopository order_repo;
};

#endif // ORDERSERVICE_H
