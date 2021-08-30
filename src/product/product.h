// 2021/8/27
// zhangzhong
// product.h

#ifndef PRODUCT_H
#define PRODUCT_H

namespace order
{

// resposibility: in a specific order, there maybe many kinds products
// so, this probably should be an interface
class Product
{
public:

    virtual double CalculatePrice(double quantity);

};


}


#endif // PRODUCT_H