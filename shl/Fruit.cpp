#include"Fruit.hpp"

Fruit& Fruit::operator--() {
    timeToSpoil_--;
}

size_t Fruit::getPrice()    const   {
    return Fruit::getBasePrice()-(10-timeToSpoil_);
}