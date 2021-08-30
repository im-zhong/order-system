// 2021/8/27
// zhangzhong
// customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "order.h"
#include <memory>

namespace order
{

// responsibility: A Customer who will buy products and generates on order
class Customer
{
public:

    std::unique_ptr<Order> NewOrder();

};

std::unique_ptr<Customer> MakePersonalCustomer();

std::unique_ptr<Customer> MakeCorporateCUstomer();

}

#endif // CUSTOMER_H