#include <iostream>
#include <cmath>
int main( ){
    long long W,H,x1,y1,x2,y2,w2,h2,w1,h1,X,Y,x,y;
    std::cout<<"Enter W,H,x1,y1,x2,y2,w2,h2"<<"\n";
    std::cin>>W>>H>>x1>>y1>>x2>>y2>>w2>>h2;
    h1=y2-y1;
    w1=x2-x1;
    if(x1>x2) { x = x1;
        x1 = x2;
        x2 = x;}
    if(y1>y2){y=y1;
        y1 = y2;
        y2 = y;}
    //do not move
    if(h2<=y1||h2<=H-y2){std::cout<<0<<"\n";
        return 0;}
    if(w2<=x1||w2<=W-x2){std::cout<<0<<"\n";
        return 0;}
    //move only vertical
  if(h1+h2<=H){Y=std::min(h2-y1,h2-(W-y2));}
    //move only horizontally
    if(w1+w2<=W){X=std::min(w2-x1,x2-(W-w2));}
    //-1
    if((w1+w2>W&&h1+h2>H)||w2>W||w1>W){std::cout<<-1<<"\n";
        return 0;}
    std::cout<<std::min(Y,X);

    return 0;}
