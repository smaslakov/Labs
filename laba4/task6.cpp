#include <iostream>
#include <cmath>
int main(){
    long long a;
    std::cin>>a;
    long long sqNumplus = (long long)std::sqrtl(a)+1;
    long long sqNum=  (long long) std::sqrtl(a);
    long long r = (long long)std::sqrtl(a);
    long long diagonal = std::pow(sqNum, 2)+ sqNumplus;
    long long row=0, colom=0;
    if(std::pow(r,2)==a){
        row = sqNumplus-1;
        colom =1;
    }
    else if(diagonal==a ){
        row = sqNumplus;
        colom = sqNumplus;
    }
    else if (a>diagonal){
        row = sqNumplus;

        long long ind = sqNumplus;

        colom = std::pow(sqNumplus,2)+1 - a;

    }
    else if(diagonal>a){
        colom =sqNumplus;

        long long numofr = sqNumplus;
        while (diagonal!=a){
            diagonal--;
            numofr--;
        }
        row = numofr;
    }
    std::cout<<row-1 <<" "<<colom-1<< "\n";

    return 0;
}

