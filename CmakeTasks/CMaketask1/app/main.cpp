#include <iostream>
#include "mymath.h"

int main() {
    int a = 5, b = 3;
    int sum = 0, diff = 0;
    
    for (int i = 0; i < 1000000; ++i) {
        sum += mymath::add(a, b);
        diff += mymath::subtract(a, b);
    }
    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    
    return 0;
}