#include <iostream>
#include "library_static_stacik.h"
int main() {
    long long n,m;
    std::cout<<"Enter the size of the array"<<"\n";
    std::cin>>n>>m;
    long long** a = new long long* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new long long [m];
    }
    long long** b = new long long* [n];
    for (int j = 0; j < n; j++) {
        b[j] = new long long[m];
    }

     matrixa( a, n, m);
    matrixb( a, b, n, m);
    std::cout<<sum( a, n, m);
    std::cout<<sum( b, n, m);


        for (int i = 0; i < n; i++) {
            delete[] a[i];
        }
        delete[] a;

        for (int i = 0; i < n; i++) {
            delete[] b[i];
        }
        delete[] b;

}
