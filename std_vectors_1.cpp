//this is to prove I know how to use vectors from standard library;
//
//

#include<vector>
#include<iostream>

int main() {
    std::vector<int> vec = {1,2, 4,5,6};
    vec.erase(vec.begin());
    vec.push_back(5);
    vec.emplace(vec.begin(),12);
    std::cout<<"size = "<<vec.size()<<std::endl;
    std::cout<<"capacity = "<<vec.capacity()<<std::endl;
    for(const int& el:vec)
        std::cout<<el<<"\n";
    vec.clear();
    std::cout<<"after clear:"<<std::endl;
    std::cout<<"size = "<<vec.size()<<std::endl;
    std::cout<<"capacity = "<<vec.capacity()<<std::endl;
        
   return 0;
}