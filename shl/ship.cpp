#include<memory>
#include"ship.hpp"


void Ship::setName(std::string name)  {
            name_ = name;
        }
std::string Ship::getName()  {
    return name_;
}

Ship& Ship::operator +=(const int teamates)  {
    crew_+=teamates;
}

Ship& Ship::operator -=(const int teamates)  {
    crew_-=teamates;
}

void Ship::load(std::shared_ptr<Cargo> cargo)   {
    Ship::freight_.emplace_back(cargo);
}

void Ship::unload(Cargo* cargo) {
    std::shared_ptr<Cargo> cargo_shrd = std::make_shared<Cargo>(&cargo);
 
    Ship::freight_.erase(std::remove(Ship::freight_.begin(),Ship::freight_.end(),cargo_shrd),Ship::freight_.end());
}