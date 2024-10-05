#include <iostream>

#define condition(X) std::cout << "condition is " << ((X) ? "true\n" : "false\n")

int main(){
    int x,y,z;
    std::cin >> x >> y >> z;
    condition((x % 2 != 0) && (y % 2 != 0));
    condition((x < 20 && y >= 20) || (x >= 20 && y < 20));
    condition(x == 0 || y == 0);
    condition(x < 0 && y < 0 && z < 0);
    condition((x % 5 == 0 && y % 5 != 0 && z % 5 != 0) || (x % 5 != 0 && y % 5 == 0 && z % 5 != 0) || (x % 5 != 0 && y % 5 != 0 && z % 5 == 0));
    condition(x > 100 || y > 100 || z > 100);
}