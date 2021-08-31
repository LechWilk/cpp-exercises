#include<string>
//#include<cstdint>


class Cargo {
    public:
        Cargo(int amount, std::string name, float basePrice)
            :   amount_(amount), name_(name), basePrice_(basePrice)
            {}
        virtual size_t getPrice() const = 0;
        virtual std::string getName()   const = 0;
        virtual size_t getAmount()  const =0;
        virtual size_t getBasePrice() const = 0;

        Cargo& operator+=(const size_t);
        Cargo& operator-=(const size_t);
    private:
        std::string name_;
        int amount_;
        float basePrice_;
};
