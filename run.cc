#include <iostream>
#include "ProductManager.h"

int main()
{
    ProductManager *manager = new ProductManager();
    Product *Pepsi = new Product("Pepsi", 2.99, {'A'});
    Product *DrPepper = new Product("Dr Pepper", 3.49, {'W'});
    Product *Fresca = new Product("Fresca", 6.98, {'W', 'J', 'G'});
    manager->addProducts({Pepsi, DrPepper, Fresca});
    std::map<char, float> out = manager->checkoutProducts();

    for (auto it = out.begin(); it != out.end(); it++) {
        std::cout << it->first << "'s total is " << it->second << std::endl;
    }
    return -1;
}