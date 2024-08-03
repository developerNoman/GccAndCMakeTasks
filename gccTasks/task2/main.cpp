#include <iostream>
#include "mymath.h"
using namespace std;


int main() {
    int a = 5, b = 3;
    int sum = 0, diff = 0;
    
    for (int i = 0; i < 1000000; ++i) {
        sum += mymath::add(a, b);
        diff += mymath::subtract(a, b);
    }
    
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    
    return 0;
}

// gcc -c mymath.cpp -o mymath.o 
// g++ -shared -o mymath.so mymath.o
// /using namespace std;
// / g++ -c main.cpp -o main.o
// g++ -o myapp main.o -L. mymath.so
// ./myapp


// export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
//  echo . | sudo tee /etc/ld.so.conf.d/mymath.conf
