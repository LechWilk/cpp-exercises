//tsimple example of how to use std::list<T>
//
//

#include<list>
#include<array>
#include<iostream>

int main()  {
    std::list<int> l = {0,1,2,3,4,5};
    
    for(auto& el:l) std::cout<<el<<' ';
    std::cout<<'\n';

    auto it = l.begin();
    std::advance(it,3);
    l.erase(it);
    l.push_back(10);
    l.push_front(10);
 
    for(auto& el:l) std::cout<<el<<' ';
    std::cout<<'\n';
 
    it=l.begin();
    std::advance(it,4);
    l.insert(it,20);


    std::array<int,10> a;
    a.fill(-1);
    int n=0;
    for(auto& el:l) a[n++]=el;
    
    for(auto& el:a)   std::cout << el << ' ';
    std::cout << '\n';
}