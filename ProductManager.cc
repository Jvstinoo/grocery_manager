#include "ProductManager.h"

void ProductManager::addProduct(Product* product){
    currentProducts.push_back(product);
}

// Only for testing
void ProductManager::addProducts(std::vector<Product*> products) {
    for (Product *product: products) {
        currentProducts.push_back(product);
    }
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

std::map<char, float> ProductManager::checkoutProducts() { 
    for (Product* product: currentProducts) {
        for (char owners: product->getBuyers()) {
            if(checkout.find(owners) != checkout.end()) {
                checkout[owners] += round((product->getPrice()/product->getBuyers().size())*100.0)/100.0;
            }
            else {
                checkout.insert(std::pair<char, float>(owners, 
                round((product->getPrice()/product->getBuyers().size())*100.0)/100.0));
            }
        }
    }

    return checkout;
}
