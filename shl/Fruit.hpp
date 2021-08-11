#include<string>
#include"cargo.hpp"

class Fruit : public Cargo  {
    public:
        Fruit& operator--();
        virtual size_t getPrice() const = 0;
    private:
        int timeToSpoil_;

};