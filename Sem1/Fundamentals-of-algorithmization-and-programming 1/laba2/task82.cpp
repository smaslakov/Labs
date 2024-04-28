#include <iostream>
#include <cmath>
int main() {
    long double a, b, c, y1, y2, d;
    std::cin >> a >> b >> c;
    d=b*b-4.0*a*(c-2*a);
    if (a==0&&b==0&&c==0){std::cout<<"x-any number";return 0;}
     if(d<0) {std::cout<<"NO SOLUTION";return 0;}
   if(a==0) {std::cout<<"x1=0";return 0;}
   if(b==0){ if(b * b - 4.0 * a * c<0) {std::cout<<"NO SOLUTION";return 0;}
       y1 = (-b + std::sqrtl(b * b - 4.0 * a * c)) / 2.0 / a;
       y2 = (-b - std::sqrtl(b * b - 4.0 * a * c)) / 2.0 / a;
       if (y1 >= 0.0) std::cout << std::sqrtl(y1) << "\n" << -1.0 * std::sqrtl(y1) << "\n";
       if (y2 >= 0.0) std::cout << std::sqrtl(y2) << "\n" << -1.0 * std::sqrtl(y2);
       if (a == 0) {std::cout << "x1=0"; return 0;}
       if(c==0) std::cout<<"x1 = -1"<<"\n"<<"x2="<<pow(-1,1/3);
       else if (y1 < 0 && y2 < 0) std::cout << "there is no solutions";}
   if(b*b-4.0*a*(c-2*a)<0){std::cout << "there is no solutions";}
    y1=(-b+std::sqrtl(b*b-4.0*a*(c-2*a)))/2.0/a;
    y2=(-b-std::sqrtl(b*b-4.0*a*(c-2*a)))/2.0/a;
    if(y1*y1-4>=0){
   std::cout<<(y1+sqrtl(y1*y1-4))/2<<"\n";
    std::cout<<(y1-sqrtl(y1*y1-4))/2<<"\n";}
    if(y1*y1-4<0&&y2*y2-4<0){std::cout << "there is no solutions";}
    if(y2*y2-4>=0){
    std::cout<<(y2-sqrtl(y2*y2-4))/2<<"\n";
    std::cout<<(y2+sqrtl(y2*y2-4))/2<<"\n";}
    return 0;}
