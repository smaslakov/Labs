#include <iostream>
#include <string>
long long str_lenght(std::string str){
    long long i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
std::string revers_str(const std::string& str){
    int n = (int)str_lenght(str) - 1;
    std::string revers_string = str;
    int j = 0;
    for(int i = n;i >= 0;--i){
        revers_string[j++] = str[i];
    }
    return revers_string;
}
long long code_sum(const std::string& str){
    long long sum = 0;
    for(int c : str){
        sum += static_cast<long long>(c);
    }
    return sum;
}
bool is_str_even(const std::string& str){
    return code_sum(str) % 2 == 0;
}
int main() {
    long long n, m;
    std::cout<<"Enter the size of array:"<<"\n";
    std::cin>>n>>m;
    std::string** arr = new std::string*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new std::string[m];
    }
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;++j){
            std::cout<<"Enter the element of array.Row: "<<i<<",column: "<<j<<"\n";
            std::cin>>arr[i][j];
        }
    }

    std::cout<<"Your matrix:";
    for(int i = 0;i < n;++i){
        std::cout<<"\n";
        for(int j = 0;j < m;++j){
            std::cout<<arr[i][j]<<" ";
        }
    }

    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;++j){
            if(is_str_even(arr[i][j])){
                arr[i][j] = revers_str(arr[i][j]);
            }
        }
    }

    std::cout<<"\n"<<"New matrix:";
    for(int i = 0;i < n;++i){
        std::cout<<"\n";
        for(int j = 0;j < m;++j){
            std::cout<<arr[i][j]<<" ";
        }
    }

    for(int i = 0;i < n;++i){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
