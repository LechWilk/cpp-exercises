#include<string>
#include<cstdint>

class Ship  {
    public:
        Ship();
        Ship(uint32_t id, std::string name, int speed, int maxCrew, float capacity)
            : id_(id), name_(name), speed_(speed), maxCrew_(maxCrew), capacity_(capacity)
            {}
        Ship(uint32_t id, int speed, int maxCrew)
            :Ship(id,"",speed,maxCrew,0)
            {}
        void setName(std::string name);
        Ship& operator +=(const int);
        Ship& operator -=(const int);
    
    private:
        uint32_t id_;
        std::string name_;
        int speed_;
        int maxCrew_;
        float capacity_;
        size_t crew_;

};
