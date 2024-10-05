#include <iostream>

int main(){
    {
        unsigned long long p = 1;
        for(auto i{8}; i <= 15; ++i){
            p *= i;
        }
        std::cout << p << std::endl;
    }
    unsigned int a;
    std::cin >> a;
    if(1<a && a<20){
        unsigned long long p = 1;
        for(auto i{a}; i <= 20; i++){
            p *= i;
        }
        std::cout << p << std::endl;
    }
    unsigned int b;
    std::cin >> b;
    if(1<b && b<20){
        unsigned long long p = 1;
        for(auto i{1}; i <= b; i++){
            p *= i;
        }
        std::cout << p << std::endl;
    }
    if(b >= a){
        unsigned long long p = 1;
        for(auto i{a}; i <= b; i++){
            p *= i;
        }
        std::cout << p << std::endl;
    }
}