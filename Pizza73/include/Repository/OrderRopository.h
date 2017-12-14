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

    private:

};

#endif // ORDERROPOSITORY_H
