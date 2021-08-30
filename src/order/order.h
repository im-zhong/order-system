// 2021/8/27
// zhangzhong
// order.h

#ifndef ORDER_H
#define ORDER_H

namespace order
{

// responsibility: describe an order
class Order
{
public:
    Order() = default;
    virtual ~Order() = default;

    void AddItems();

    void DelItems();

    void FindItems();

    void DisplayOrder();

    void CalculatePrice();


};

}


#endif // ORDER_H