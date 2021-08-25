#include"cargo.hpp"

class Alcohol   :   public Cargo    {
    public:
        Alcohol(int amount, std::string name, float basePrice, int alcoPower)
        :   Cargo(amount, name, basePrice), alcoPower_(alcoPower)
        {}
        virtual size_t getPrice() const = 0;
    private:
        int alcoPower_;

};