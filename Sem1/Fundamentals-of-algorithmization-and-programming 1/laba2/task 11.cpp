#include <iostream>
#include <cmath>
int main( ){
    long double r,p,q,R;
    std::cin>>R>>p>>q;
    r=p*sin(q)/2;
    if(R<=r)std::cout<<"YES";
    else std::cout<<"NO";
    return 0;}


