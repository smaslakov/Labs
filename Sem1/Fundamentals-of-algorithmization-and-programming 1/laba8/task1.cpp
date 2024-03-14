#include <iostream>
#include <string>
#include <algorithm>
long double* buble_sort(long double* arr,int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    return arr;
}

int main() {
    std::string str;
    std::cout<<"Enter your string"<<"\n";
    std::getline(std::cin,str);
    long long k = 0;
    long double b;
    int num = 0, counter = 0,last_space = 0;
    for(int i = 0;i < str.length();++i){
        if(str[i] == ' '){
            num++;
        }
    }
    long double* a = new long double [num + 1];
    str = str + ' ';
    for(int i = 0;i < str.length();++i){
        if(str[i] == ' '){
            b = std::stold(str.substr(last_space,k));
            a[counter++] = b;
            last_space = i + 1;
            k = 0;
        }
        else k++;
    }
    buble_sort(a,num + 1);
    std::cout<<"Your sorted numbers:"<<"\n";
    for(int i = 0;i <= num;++i){
        std::cout<<a[i]<<"\n";
    }

    delete[] a;
    return 0;
}
