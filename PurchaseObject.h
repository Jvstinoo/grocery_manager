#include <string>
#include <vector>

class PurchaseObject{
    private:
        float price;
        std::string name;
        std::vector<char> buyers;

    public:
        PurchaseObject(std::string name_, float price_, std::vector<char> buyers_): 
        name(name_), price(price_), buyers(buyers_){};

};