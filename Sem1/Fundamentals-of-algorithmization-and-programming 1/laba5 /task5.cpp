#include <iostream>
void fillarr(long long** a, long long n, long long m){
    std::cout<<"Fill the array"<<"\n";
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            std::cin>>a[i][j];
        }
    }
}
long long massive_counter(long long** a, long long n, long long m){
    long long sum=0;
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j+=2){
            if(a[i][j]%2!=0){
                sum++;
            }
        }
    }
    return sum;
}
void printnewarr(long long** a, long long n, long long m, long long* b, long long sum ) {
    long long h=0;
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < m; j += 2) {
            if (a[i][j] % 2 != 0) {
                b[h++] = a[i][j];
            }
        }
    }
    std::cout<<"New array:"<<"\n";
    for (long long q = 0; q < sum; q++) {
        std::cout<<b[q]<<" ";
    }
    std::cout<<"\n";
}
long long average(long long* b, long long sum) {
    long long sum_arr=0;
    for (long long i = 0; i < sum; i++) {
       sum_arr+=b[i];
    }
    sum_arr=sum_arr/sum;
    return sum_arr;
}
int main() {
    long long n,m;
    std::cout<<"Enter the size of the array"<<"\n";
    std::cin>>n>>m;
    long long** a = new long long* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new long long[m];
    }
    fillarr( a, n, m);
    long long sum=massive_counter(a, n, m);
    long long* b = new long long [sum];
    printnewarr(a, n, m, b, sum);
    std::cout<<"Arithmetic mean:"<<average(b, sum)<<"\n";
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    delete[] b;
    return 0;
}
