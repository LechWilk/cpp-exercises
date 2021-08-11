#include"Item.hpp"

size_t Item::getPrice()    const   {
    switch (Item::occurance_)   {
        case rarity::common:
            return Item::getBasePrice();
        case rarity::rare:
            return Item::getBasePrice()*1,25;
        case rarity::epic:
            return Item::getBasePrice()*1,5;
        case rarity::legendary:
            return Item::getBasePrice()*1,75;  
    }
}