#include "OrderService.h"

OrderService::OrderService()
{
    //ctor
}

void OrderService::add_order(Order& order)
{
    order_repo.add_order(order);
}

//vector<Order> OrderService::retrieve_all_orders()
//{
   // return order_repo.retrieve_all_orders();
//}

//void OrderService::deliverNewVectorToFile(vector<Order>& newlist) {
  //  order_repo.deliverNewVectorToFile(newlist);}

/*vector<Order> OrderService::new_list(int deltop)
{
    vector<Order> current_orders = order_repo.ret
    vector<Order> new_drink_list;


    for(unsigned int i = 0; i < current_drinks.size(); i++) {

        if(i == deltop -1) {
            continue;
        }
        else {
         //   new_drink_list.push_back(current_drinks[i]);
        }
    }
    return new_drink_list;
}
*/
