#include "ProductManager.h"

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

