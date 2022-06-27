#include "Product.h"

void Product::setName(std::string name) { this->name = name; }
void Product::setPrice(float price) { this->price = price; }
void Product::setBuyers(std::vector<char> buyers) { this->buyers = buyers; }

std::vector<char> Product::getBuyers() { return buyers; };
std::string Product::getName() { return name; };
float Product::getPrice() { return price; };