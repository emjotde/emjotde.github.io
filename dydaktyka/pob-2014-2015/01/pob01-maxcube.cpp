#include <iostream>

int cube(int x) { 
    return x*x*x; 
}

int main() {
    int x = 2;
    std::cout << cube(x);

    return 0;
}
