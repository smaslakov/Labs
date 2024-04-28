#include <iostream>
#include <cmath>
int main() {
    long double a, b, c, y1, y2,d, p, q,y;
    int f;
    std::cout << "Enter 1 for solution 7.1,2 for solution 7.2,3 for solution 7.3" << "\n";
    std::cin >> f;
    switch (f) {

        case 1:
            std::cout << "Enter coefficients a,b,c" << "\n";
            std::cin >> a >> b >> c;
            //0 coefficient
           if (a == 0){if(c<0)std::cout<<"x1="<<sqrtl(-1*c/b)<<"x2="<<-1*sqrtl(-1*c/b);
            if(c>0)std::cout<<"there is no solutions";
            if(c==0)std::cout<<"x1=0";
            return 0;}
            if(c==0){if (b<0) {std::cout<<"x1=0"<<"\n"<<"x2="<<sqrtl(-1*b/a)<<"\n"<<"x3="<<-1*sqrtl(-1*b/a)<<"\n";}
            if(b>=0) {std::cout<<"x1=0"<<"\n";}
            return 0;}
            if(b==0){if (c<0) {std::cout<<"x1="<<sqrtl(-1*c/a)<<"\n"<<"x2="<<-1*sqrtl(-1*c/a)<<"\n";}
            if(c>0) {std::cout<<"there is no solutions";}
            if(c==0) {std::cout<<"x1=0";}
            return 0;}
            if(a==0&&b==0){std::cout<<"x-any number";
            return 0;}
            //solution
            y1 = (-b + std::sqrtl(b * b - 4.0 * a * c)) / 2.0 / a;
            y2 = (-b - std::sqrtl(b * b - 4.0 * a * c)) / 2.0 / a;
            if((b * b - 4.0 * a * c)>=0){
            if (y1 >= 0.0) {std::cout <<"x1="<<std::sqrtl(y1) << "\n" <<"x2="<<-1.0 * std::sqrtl(y1) << "\n";return 0;}
            if (y2 >= 0.0) {std::cout <<"x3="<<std::sqrtl(y2)<< "\n" << "x4="<<-1.0 * std::sqrtl(y2);return 0;}}
            if (y1 < 0 && y2 < 0) std::cout << "there is no solutions";
            if(b * b - 4.0 * a * c<0){std::cout<<"there is no solutions";}
            break;
        case 2:
            std::cout << "Enter coefficient a,b,c" << "\n";
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
            y1=(-b+std::sqrtl(b*b-4.0*a*(c-2*a)))/2.0/a;
            y2=(-b-std::sqrtl(b*b-4.0*a*(c-2*a)))/2.0/a;
            if(y1*y1-4>=0){
                std::cout<<(y1+sqrtl(y1*y1-4))/2<<"\n";
                std::cout<<(y1-sqrtl(y1*y1-4))/2<<"\n";}
            if(y2*y2-4>=0){
                std::cout<<(y2-sqrtl(y2*y2-4))/2<<"\n";
                std::cout<<(y2+sqrtl(y2*y2-4))/2<<"\n"; break;}
            return 0;
        case 3: std::cin >> p >> q;
            d=p*p*p/27+q*q/4;
            if(q==0&&p==0){std::cout<<"x1="<<0;return 0;}
            if (q<0){y=std::atan(sqrtl(-d)/(-q/2));}
            if(q>0){y=std::atan(sqrtl(-d)/(q/2))+3.1415;}
            if(q==0){y=3.1415/2;}
            if (q==0&&p<0) {std::cout <<"x1 = 0 "<<"\n"<<"x2="<<sqrt(-p)<<"\n"<<"x3="<< -sqrt(-p)<<"\n";
            return 0;}
            if (d <0) {std::cout << "x1 =" << 2*sqrtl(-p/3)*cos(y/3)<<"x2="<<2*sqrtl(-p/3)*cos(y/3+2*3.1415/3)<<"x3="<<2*sqrtl(-p/3)*cos(y/3+4*3.1415/3);
            return 0;}
            if(d>0) {std::cout<<std::cbrtl(-q/2+std::sqrtl(d))+cbrtl(-q/2-std::sqrtl(d));
            return 0;}
            if(d==0) {std::cout<<"x1="<<2*cbrtl(-q/2)<<"x2="<<cbrtl(-q/2);
            return 0;}
            else {std::cout <<"there is no solution";}
            break;
        default:std::cout<<"NO BRAIN ERROR";}

                return 0;}