#include <iostream>
int main( ){
    long double a, b, c;
    int n;
    std::cin>>a>>b>>c>>n;
    switch (n) {
        case 2:
            std::cout << b * c - a * a << "\n";
            break;
        case 56:
            std::cout << b * c << "\n";
            break;
        case 7:
            std::cout << a * a + c << "\n";
            break;
        case 3:
            std::cout << a - b * c << "\n";
            break;
        case 4:
            std::cout << (a + b) * (a + b) * (a + b) << "\n";
        default:
            std::cout << "n is undefined" << "\n";
    }
    return 0;}

