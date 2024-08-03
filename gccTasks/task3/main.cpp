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


// g++ -g -c mymath.cpp -o mymath.o
// g++ -g -c main.cpp -o main.o
//  g++ -o myapp mymath.o main.o
//  time ./myapp

//  g++ -O2 -c mymath.cpp -o mymath1.o
// g++ -O2 -c main.cpp -o main1.o
//  g++ -o myapp_release mymath1.o main1.o
//  time ./myapp_release 