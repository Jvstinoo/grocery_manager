#include "Product.h"
#include <map>

class ProductManager
{
private:
    std::vector<Product*> currentProducts;

public:

    void addProduct(Product*); 
    void removeProduct(Product*, std::string);
    void updateProduct(std::string);

    std::map<char, float> checkoutProducts();

};