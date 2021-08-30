// 2021/8/27
// zhangzhong
// order system

// simulate a order
// if a go to a resturant, and I want to order some food

#include "customer.h"
#include "product.h"

int main(int argc, char* argv[])
{
    auto customer = order::MakePersonalCustomer();

    // I want to order some thing
    auto order = customer->NewOrder();

    // 这个order当然需要支持各种增删改查的操作
    order->AddItems();
    order->DelItems();
    order->FindItems();

    // 我们需要展示一张订单，帮助客户更好的认清自己
    order->DisplayOrder();

    // 订单操作完成之后，最重要的当然就是计算价格
    order->CalculatePrice();

}