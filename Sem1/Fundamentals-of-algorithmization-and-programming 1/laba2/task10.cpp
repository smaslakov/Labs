#include <iostream>
#include <cmath>
int main()
{
    long double x1, y1, x2, y2, r, R, l;
    std::cout << "Enter x1, y1, r, x2, y2, R:" << "\n";
    std::cin >> x1 >> y1 >> r >> x2 >> y2 >> R;
    l = sqrtl(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (l < r && r <= R+l) {std::cout << "Circle 2() in circle 1"; return 0;}
    if (R + r >= l && (r-l < R||r-l < r)) {std::cout << "The circles are crossing";return 0;}
    if (R > l && R >= r+l) {std::cout << "Circle 1 in circle 2";return 0;}
    else {std::cout << "None of the conditions are met";}

return 0; }
