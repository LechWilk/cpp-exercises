#include<string>
#include"cargo.hpp"

class Fruit : public Cargo  {
    public:
        Fruit(int amount, std::string name, float basePrice, int timeToSpoil)
        :   amount_(amount), name_(name), basePrice_(basePrice), timeToSpoil_(timeToSpoil)
        {}
        Fruit& operator--();
        virtual size_t getPrice() const = 0;
    private:
        int timeToSpoil_;

};