#include "cargo.hpp"

Cargo& Cargo::operator+=(const size_t amt)  {
    amount_+=amt;
}
Cargo& Cargo::operator-=(const size_t amt)  {
    amount_-=amt;
}


