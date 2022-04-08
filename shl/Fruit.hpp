#include<string>
#include"cargo.hpp"

class Fruit : public Cargo  {
    public:
        Fruit(int amount, std::string name, float basePrice, int timeToSpoil)
        :   Cargo(amount, name, basePrice), timeToSpoil_(timeToSpoil)
        {}
        virtual Fruit& operator--();
        virtual size_t getPrice() const override;
    protected:
        int timeToSpoil_;

};

class DryFruit : public Fruit{
   public:
        DryFruit(int amount, std::string name, float basePrice, int timeToSpoil)
        :   Fruit(amount, name, basePrice, timeToSpoil), daysTenthsToSpoil_(0)
        {}

        size_t getPrice() const override;
        DryFruit& operator--() override;
    protected:
        int daysTenthsToSpoil_;

};