#include"cargo.hpp"

class Item:public Cargo {
    public:
        Item(int amount, std::string name, float basePrice, rarity occurance)
        :   Cargo(amount, name, basePrice), occurance_(occurance)
        {}
        virtual size_t getPrice() const = 0;
    private:
        rarity occurance_;
        
};

enum class rarity   {
    common, 
    rare, 
    epic, 
    legendary
};
