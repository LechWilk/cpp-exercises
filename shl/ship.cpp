#include"ship.hpp"


void Ship::setName(std::string name)  {
            name_ = name;
        }

Ship& Ship::operator +=(const int teamates)  {
    crew_+=teamates;
}

Ship& Ship::operator -=(const int teamates)  {
    crew_-=teamates;
}
