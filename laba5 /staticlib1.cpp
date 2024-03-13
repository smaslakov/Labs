#include <iostream>
#include "library_static_stacik.h"
void matrixa(long double** a,long long n,long long m){
    for(long long i = 0;i < n;i++){
        for(long long j = 0;j < m;j++){
            if(i <= 3 && j <= 9){
                a[i][j]=2 * i * j * j - 2 * j;
            }
            if(i <= 3 && j > 9){
                a[i][j]=3 * i * j * j - 3 * j;
            }
            if(i > 3 && j <= 9){
                a[i][j]=2 * i * j - 2;
            }
            if(i > 3 && j > 9){
                a[i][j]=2 * i * j - 2;
            }
        }
    }
    std::cout<<"Matrix A:"<<"\n";
    for(long long i = 0;i < n;i++) {
        std::cout << "\n";
        for (long long j = 0; j < m; j++) {
            std::cout << a[i][j] << " ";
        }
    }
}
void matrixb(long double** a,long double** b,long long n,long long m){
    for(long long i = 0;i < n;i++) {
        for (long long j = 0; j < m; j++) {
            b[i][j]=a[i][j]*a[i][j];
        }
    }
    std::cout<<"Matrix B:"<<"\n";
    for(long long i = 0;i < n;i++) {
        std::cout << "\n";
        for (long long j = 0; j < m; j++) {
            std::cout << b[i][j] << " ";
        }
    }
}
long double sum(long double** a,long long n,long long m){
    long double sum_ =0;
    for(long long i = 0;i < n;i++) {
        for (long long j = 0; j < m; j+=2) {
            sum_+=a[i][j];
        }
    }
      return sum_;
}