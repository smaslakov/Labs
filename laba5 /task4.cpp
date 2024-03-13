#include <iostream>
void fillarr(long double** a, long long n, long long m){
    std::cout<<"Fill the array"<<"\n";
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            std::cin>>a[i][j];
        }
    }
}
void zeroel(long double** a,long long n, long long m){
    long long t=0;
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            if(a[i][j]==0.0){
                std::cout<<"Index of zero element:"<<" "<<i<<" "<<j<<"\n";
                t++;
            }
        }
    }
    std::cout<<"Number of 0 elements:"<<" "<<t<<"\n";
}
void reversarr(long double** a,long long n, long long m){
    std::cout<<"Your reverse array:";
    for(long long i = n-1; i >= 0; i--){
        std::cout<<"\n";
        for (long long j = m-1; j >= 0; j--) {
           std::cout<<a[i][j]<<" ";
        }
    }
}

int main() {
    long long n,m;
    std::cout<<"Enter the size of the array"<<"\n";
    std::cin>>n>>m;
    long double** a = new long double* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new long double [m];
    }
    fillarr(a, n, m);
    zeroel(a, n, m);
    reversarr(a, n, m);
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
