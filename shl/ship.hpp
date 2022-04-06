#include<string>
//#include<cstdint>
#include<vector>
#include<memory>
#include"cargo.hpp"


class Ship  {
    public:
        Ship();
        Ship(uint32_t id, std::string name, int speed, int maxCrew, float capacity)
            : id_(id)
            , name_(name)
            , speed_(speed)
            , maxCrew_(maxCrew)
            , capacity_(capacity)
            {}
        Ship(uint32_t id, int speed, int maxCrew)
            :Ship(id,"",speed,maxCrew,0)
            {}
        void setName(std::string name);
        std::string getName();
        Ship& operator +=(const int);
        Ship& operator -=(const int);
        void load(std::shared_ptr<Cargo>);
        void Ship::unload(Cargo* cargo);
    private:
        uint32_t id_ = -1;
        std::string name_;
        int speed_;
        int maxCrew_;
        float capacity_;
        size_t crew_;
        std::vector<std::shared_ptr<Cargo>> freight_;

};
