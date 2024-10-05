#include <iostream>


int main(){
    int N;
    std::cin >> N;
    for(auto i{1}; i < 10; ++i){
        std::cout << i << " x " << N << " = " << N*i << std::endl;
    }
}