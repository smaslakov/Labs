#include <iostream>
#include <cmath>
int main( ){
    long double a, c ,z, x;
    int f;
    std::cout<<"Enter a,c,z"<<"\n";
    std::cin>>a>>c>>z;
   std::cout<<"enter 1 - for f(x)=2x,2-for f(x)=x^3,3-for f(x)=x/3 "<<"\n";;
    std::cin>>f;
   (z <= 0) ? x = z*z-1 : x = 1/sqrtl(z-1);
    switch (f) {

        case 1:
            std::cout <<a*pow(sin(2*x*2*x-1),3)+c*log(fabs(x))+exp(x)<< "\n";
            break;
        case 2:
            std::cout <<a*pow(sin(pow(x,6)-1),3)+c*log(fabs(x))+exp(x)  << "\n";
            break;
       case 3:
            std::cout << a*pow(sin(x*x/9-1),3)+c*log(fabs(x))+exp(x) << "\n";
            break;
    }
    return 0;}

