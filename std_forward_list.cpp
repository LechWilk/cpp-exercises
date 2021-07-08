//tsimple example of how to use std::list<T>
//
//

#include<forward_list>
#include<array>
#include<iostream>

int main()  {
    std::forward_list<int> l = {0,1,2,3,4,5,6};
    
    for(auto& el:l) std::cout<<el<<' ';
    std::cout<<'\n';

    auto it = l.before_begin();
    std::advance(it,3);
    l.erase_after(it);
    l.push_front(10);

    auto it_prev =l.begin();
    while(it!=l.end()) it_prev=it++;        //wyszukiwanie przedostatniego elementu
   
    l.emplace_after(it_prev,10);
 
    for(auto& el:l) std::cout<<el<<' ';
    std::cout<<'\n';
 
    it=l.before_begin();
    std::advance(it,4);
    l.insert_after(it,20);

    std::array<int,10> a;
    a.fill(-1);
    int n=0;
    for(auto& el:l) a[n++]=el;
    
    for(auto& el:a)   std::cout << el << ' ';
    std::cout << '\n';

    return 0;
    
}