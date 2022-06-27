#include "Product.h"
#include <map>

class ProductManager
{
private:
    std::vector<Product *> currentProducts;
    std::map<char, float> checkout;

public:
    void addProduct(Product *);
    void removeProduct(Product*);
    void updateProduct(Product, Product);
    std::vector<Product *> getProducts() { return currentProducts; }

    std::map<char, float> checkoutProducts();
};

