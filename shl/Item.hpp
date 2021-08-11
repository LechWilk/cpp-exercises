#include"cargo.hpp"

class Item:public Cargo {
    public:
        virtual size_t getPrice() const = 0;
    private:
        enum class rarity   {
            common, 
            rare, 
            epic, 
            legendary

        } occurance_;
        
};