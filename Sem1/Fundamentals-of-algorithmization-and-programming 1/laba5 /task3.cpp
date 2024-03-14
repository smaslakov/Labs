#include <iostream>
void fillarr(long long** a, long long n, long long m){
    std::cout<<"Fill the array"<<"\n";
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            std::cin>>a[i][j];
        }
    }
}
long long lengtharr(long long** a, long long n, long long m){
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            if(i==j){
                if(a[i][j]%2==0){
                    sum++;
                }
            }
        }
    }
    return sum;
}
void printnewarr(long long** a, long long n, long long* b,long long sum ) {
    long long h=0;
    for (long long i = 0; i < n; i++) {
        if (a[i][i] % 2 == 0) {
            b[h++] = a[i][i];
        }
    }
    std::cout<<"New array:"<<"\n";
    for (long long q = 0; q < sum; q++) {
        std::cout<<b[q]<<" ";
    }
    std::cout<<"\n";
}
void multiplication(long long *b,long long sum){
    long long product = 1;
    for (int i = 0; i < sum; ++i) {
    product *= b[i];
    }

std::cout<<"Product of dynamic array elements:"<<" "<<product<<"\n";
}

int main() {
    long long n,m;
    std::cout<<"Enter the size of the array"<<"\n";
    std::cin>>n>>m;
    long long** a = new long long* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new long long [m];
    }
    fillarr( a, n, m);
    long long sum = lengtharr( a,  n, m);
    long long* b = new long long [sum];
    printnewarr( a, n, b, sum );
    multiplication(b,sum);
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    delete[] b;
   return 0;
}



