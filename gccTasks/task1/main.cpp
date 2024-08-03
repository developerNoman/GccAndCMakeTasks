#include <iostream>
#include "mymath.h"

int main() {
    int a = 5, b = 3;
    int sum = 0, diff = 0;
    
    for (int i = 0; i < 1000000; ++i) {
        sum += mymath::mul(a, b);
        diff += mymath::subtract(a, b);
    }
    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    
    return 0;
}
// gcc -c mymath.cpp -o mymath.o 
//  ar rcs mymath.a mymath.o
// gcc -c main.cpp -o main.o
// g++ -o main main.o -L. mymath.a
// ./main   
