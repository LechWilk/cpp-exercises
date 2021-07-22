#include<string>
#include<cstdint>


class Cargo {
    public:
        Cargo& operator+=(const size_t);
        Cargo& operator-=(const size_t);
    private:
        std::string name_;
        int amount_;
        float bestPrice_;
};
