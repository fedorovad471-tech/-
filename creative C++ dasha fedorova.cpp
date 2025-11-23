#include <iostream>
#include <cmath>

int main(){
    int a, b;
    std::cin >> a >> b;
    unsigned int a2 = a - 1;
    unsigned int a4 = pow(10, a2);
    unsigned int a3 = b / a4;
    std::cout << a3;
return 0;
}
