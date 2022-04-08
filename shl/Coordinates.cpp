#include"Coordinates.hpp"
#include<cmath>

static size_t Coordinates::distance(const Coordinates& lhs, const Coordinates& rhs) {
    return std::sqrt(std::sqr(lhs.positionX_-rhs.positionX_)+std::sqr(lhs.positionY_-rhs.positionY_));
}

bool Coordinates::operator ==(const Coordinates& a)   {
    return Coordinates::distance(this,&a)==0 ? true : false;      //czy jakoś tak...
}
