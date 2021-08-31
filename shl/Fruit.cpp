#include"Fruit.hpp"

Fruit& Fruit::operator--() {
    timeToSpoil_--;
}

size_t Fruit::getPrice()    const   {
    return Fruit::getBasePrice()-(10-timeToSpoil_);
}

size_t DryFruit::getPrice() const    {
    return DryFruit::getBasePrice()*3;
}

DryFruit& DryFruit::operator--() {
    daysTenthsToSpoil_++;
    if (daysTenthsToSpoil_>=10) {
        daysTenthsToSpoil_=0;
        timeToSpoil_--;
    }  
}