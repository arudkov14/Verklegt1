#include "BakerService.h"

vector<string> BakerService::retrieve_bakers_orders()
{
    BakerRepository baker_repo;

    vector<string> bakers_orders = baker_repo.retrieve_bakers_orders();

    return bakers_orders;
}

void BakerService::next_order(string baker_order)
{
    BakerService baker_service;

    int position_of_order_status = 0;

    for (unsigned int i = 0; i < baker_order.length(); i++) {
        if (baker_order[i] != '-') {
            position_of_order_status++;
        }
        else {
            break;
        }
    }

    char stage;
    cout << "Press 'r' to mark ready: " << endl;
    cin >> stage;
    if (stage == 'r') {
        baker_service.update_order_status(baker_order, position_of_order_status);
    } else {
        /// THROW EXCEPTION
    }
}

void BakerService::update_order_status(string& baker_order, int position_of_order_status)
{
    const int SIZE_OF_ORDERED_STRING = 7;
    string ready = "Ready";

    baker_order.replace(position_of_order_status+1, SIZE_OF_ORDERED_STRING, ready);
    cout << baker_order << endl;
}

void BakerService::delete_order(string& baker_order)
{
    BakerRepository baker_repo;
    baker_repo.delete_order(baker_order);
}
