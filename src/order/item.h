// 2021/8/27
// zhangzhong
// item.h

#ifndef ITEM_H
#define ITEM_H

namespace order
{

    class Product;

    // 如何在订单中描述一件商品？
    // 其实就是一条可以特定的描述一件商品的标识，和可以标识其数量，质量等的quantity
    class Item
    {
        double quantity;
        // 运用动态特性，相比 枚举+选择 机制更加灵活
        Product *product;
    };

}

#endif // ITEM_H
