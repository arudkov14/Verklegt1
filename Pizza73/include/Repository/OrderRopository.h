#ifndef ORDERROPOSITORY_H
#define ORDERROPOSITORY_H
#include <vector>
#include <string>
#include <stdlib.h>
#include "Order.h"


class OrderRopository
{
    public:
        OrderRopository();
        void add_order(Order& order);
        Order parseString(string line);
        void deliverNewVectorToFile(vector<Order>& newlist);
        vector<string> retrieve_all_orders();

    private:

};

#endif // ORDERROPOSITORY_H
