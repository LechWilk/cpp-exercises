#include"cargo.hpp"

class Alcohol   :   public Cargo    {
    public:
        virtual size_t getPrice() const = 0;
    private:
        int alcoPower_;

};