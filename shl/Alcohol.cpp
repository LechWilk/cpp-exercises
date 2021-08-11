#include"Alcohol.hpp"


size_t Alcohol::getPrice()    const   {
    return Alcohol::getBasePrice()*(1+(alcoPower_-96)/100);
}