#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
    long double k, x, y;
    std::cin >> k >> x >> y;
    if (k<0) {
        x = x * (-1);
        y = y * (-1);
        k = k * (-1);
    }
//1 dot
    if (k > x && x > 0 && k > y && y > 0)
        std::cout << std::setprecision(22) << std::min(std::min(x, (k - x)), std::min(y, (k - y)));
        //3 dot
    else if (k < x && x > 0 && k < y && y > 0)
        std::cout << std::setprecision(22) << sqrtl((x - k) * (x - k) + (y - k) * (y - k));
        //2 dot
    else if (k > x && x > 0 && k < y && y > 0)
        std::cout << std::setprecision(22) << y - k;
        //4 dot
    else if (k < x && x > 0 && k > y && y > 0)
        std::cout << std::setprecision(22) << x - k;
        // 6 dot
    else if (k > x && x > 0 && y < 0)
        std::cout << std::setprecision(22) << 0.0 - y;
        //5 dot
    else if (k < x && x > 0 && y < 0)
        std::cout << std::setprecision(22) << sqrtl((0.0 - y) * (0.0 - y) + (x - k) * (x - k));
        //7 dot
    else if (x < 0 && y < 0)
        std::cout << std::setprecision(22) << sqrtl((0.0 - y) * (0.0 - y) + (0.0 - x) * (0.0 - x));
        //8 dot
    else if (x < 0 && k > y && y > 0)
        std::cout << std::setprecision(22) << 0.0 - x;
        //9 dot
    else if (x < 0 && k < y && y > 0)
        std::cout << std::setprecision(22) << sqrtl((0.0 - x) * (0.0 - x) + (y - k) * (y - k));
    else if (x == 0 && y > 0 && y > k)
        std::cout << std::setprecision(22) << y - k;
    else if (x == 0 && y < 0)
        std::cout << std::setprecision(22) << 0.0 - y;
    else if (y == 0 && x < 0)
        std::cout << std::setprecision(22) << 0.0 - x;
    else if (y == 0 && x > 0 && x > k)
        std::cout << std::setprecision(22) << x - k;
    else std::cout<<0;


    return 0;}

