#include <string>
#include <vector>

class Product
{
private:
    float price;
    std::string name;
    std::vector<char> buyers;

public:
    Product(std::string name_, float price_, std::vector<char> buyers_) : name(name_), price(price_), buyers(buyers_){};

    void setBuyers();
    void setName();
    void setPrice();

    std::vector<char> getBuyers();
    std::string getName();
    float getPrice();
};