#include "ProductManager.h"

void ProductManager::addProduct(Product* product){
    currentProducts.push_back(product);
}

void ProductManager::removeProduct(Product* product) {
    for(int i = 0; i < currentProducts.size(); i++) {
        if(currentProducts[i]->getName() == product->getName()){
            currentProducts.erase(currentProducts.begin()+i);
            break; 
        }
    }
}
void ProductManager::updateProduct(Product old, Product updated) {

    for (Product *i: currentProducts) {
        if(i->getName() == old.getName()) {
            i->setName(updated.getName());
            i->setPrice(updated.getPrice());
            i->setBuyers(updated.getBuyers());
            break;
        }
    }
}

