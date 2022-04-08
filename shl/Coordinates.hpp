


class Coordinates   {
    public:
        Coordinates (size_t positionX, size_t positionY)
        : positionX_(positionX)
        , positionY_(positionY)
        {}
        
        static size_t distance(const Coordinates& lhs, const Coordinates& rhs);
        bool operator == (const Coordinates&);
    private:
        size_t positionX_;
        size_t positionY_;

};