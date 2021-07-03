//tsimple example of how to use std::array<T,N>
//
//

#include<array>
#include<iostream>

int main()  {
    std::array<int,10> arr, other_arr;
    arr.fill(5);
    arr[3]=3;
    for(auto& el:arr)   std::cout << el << ' ';
    std::cout << '\n';
    for(auto& el:other_arr)   std::cout << el << ' ';
    std::cout << '\n';
    arr.swap(other_arr);
    for(auto& el:arr)   std::cout << el << ' ';
    std::cout << '\n';
    for(auto& el:other_arr)   std::cout << el << ' ';
    
}   