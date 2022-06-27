#include "Product.h"
#include <map>

class ProductManager
{
private:
    std::vector<Product *> currentProducts;

public:
    ProductManager(){};
    ~ProductManager(){};
    void addProduct(Product *);
    void removeProduct(Product*);
    void updateProduct(Product, Product);
    std::vector<Product *> getProducts() { return currentProducts; }

    std::map<char, float> checkoutProducts();
};