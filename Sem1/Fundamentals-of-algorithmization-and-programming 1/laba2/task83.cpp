#include <iostream>
#include <cmath>
int main() {
    long double p,q;
    std::cout<<"Enter p and q";
    std::cin >> p >> q;
    if (q==0) {if(p>0) {std::cout<<"x=0";}
    if(p<0) {std::cout<<"x1=0"<<"\n"<<"x2="<<sqrtl(p)<<"x3="<<-1*sqrtl(p);}
    return 0;}
    if (p==0){std::cout<<pow(-1*q,1/3);
    return 0;}
    if(p==0 && q==0){std::cout<<"x=0";
    return 0;}



    return 0;}

