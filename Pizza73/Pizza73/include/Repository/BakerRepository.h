#ifndef BAKERREPOSITORY_H
#define BAKERREPOSITORY_H

using namespace std;
#include <vector>
#include "Order.h"
#include <fstream>
#include <stdlib.h>

class BakerRepository
{
    public:
        string parseOrder(string line);
        vector<string> retrieve_bakers_orders();
        void delete_order(string& baker_order);

    private:

};

#endif // BAKERREPOSITORY_H
