#ifndef BAKERSERVICE_H
#define BAKERSERVICE_H

using namespace std;
#include <iostream>
#include "BakerRepository.h"
//#include <boost/algorithm/string.hpp>

class BakerService
{
    public:
        vector<string> retrieve_bakers_orders();
        void next_order(string baker_order);
        void update_order_status(string& baker_order, int position);
        void delete_order(string& baker_order);
    private:
};

#endif // BAKERSERVICE_H
