#include <iostream>
#include <tuple>

#define pre_cond(p) ((1 <= p.first <= 8) && (1 <= p.second <= 8))
#define condition(X,p1,p2) std::cout << "condition is " << ((((X) && (pre_cond(p1)) && (pre_cond(p2)))) ? "true\n" : "false\n")

using byte = unsigned char;
typedef std::pair<byte,byte> position;

int main(){
    position positionA{}, positionB{};
    std::cin >> positionA.first >> positionA.second;
    std::cin >> positionB.first >> positionB.second;
    condition((positionA.first == positionB.first || positionA.second == positionB.second) && positionA != positionB,positionA,positionB);
    condition(std::abs(positionA.first - positionB.first) == std::abs(positionA.second - positionB.second) && positionA != positionB,positionA,positionB);
    condition(std::abs(positionA.first - positionB.first) <= 1 && std::abs(positionA.second - positionB.second) <= 1 && (positionA != positionB),positionA,positionB);
    condition(((positionA.first == positionB.first 
        || positionA.second == positionB.second) 
        || std::abs(positionA.first - positionB.first) == std::abs(positionA.second - positionB.second)) 
        && positionA != positionB, positionA, positionB);
    
    condition(positionA.first == positionB.first && positionB.second - positionA.second == 1, positionA, positionB);
    condition(std::abs(positionA.first - positionB.first) == 1 && positionB.second - positionA.second == 1, positionA, positionB);
}