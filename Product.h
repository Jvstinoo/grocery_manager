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
    ~Product(){};
    
    void setBuyers(std::vector<char>);
    void setName(std::string);
    void setPrice(float);

    std::vector<char> getBuyers();
    std::string getName();
    float getPrice();
};