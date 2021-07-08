//tsimple example of how to use std::deque<T>
//
//

#include<deque>
//#include<cstdlib>
#include<iostream>

int main()  {

std::deque<int> deq;
for(int i=0; i<5; i++)
    deq.push_back(rand()%10);
for(const auto& el:deq)
    std::cout<<el<<'\n';
std::cout<<'\n';    
    
auto it=++deq.begin();

//usuń 2. element
deq.erase(it);

//usuń 4. element
std::advance(it,2);
deq.erase(it);

//dodaj na początek
deq.emplace_front(30);

//dodaj na koniec
deq.emplace_back(30);

for(const auto& el:deq)
    std::cout<<el<<'\n';
std::cout<<'\n';

//dodaj na 4. pozycji
deq.insert(it,20);

//wyświetl
for(const auto& el:deq)
    std::cout<<el<<'\n';
std::cout<<'\n';
std::cout<<"size: "<<deq.size()<<'\n';

    return 0;
}