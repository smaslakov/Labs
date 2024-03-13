#include "iostream"
int rowsum (int* row,int n){
    int sum = 0;
    for(int i = 0;i < n;++i){
        sum+=row[i];
    }
    return sum;
}

void Rowswap(int* row1, int* row2, int m){
    for(int i = 0;i < m;++i){
        int a = row1[i];
        row1[i] = row2[i];
        row2[i] = a;
    }
}

void Sortarr(int **arr, int n, int m){
    for(int i = 0;i < n - 1;++i){
        for(int j = 0;j < n - i - 1;++j){
            if(rowsum (arr[j], m) > rowsum (arr[j + 1], m)){
                Rowswap(arr[j], arr[j + 1], m);
            }
        }
    }
}

int main(){
    int n,m;
    std::cout<<"Enter the size of the array"<<"\n";
    std::cout<<"Number of rows: "<<"\n";
    std::cin>>n;
    std::cout<<"Number of columns: "<<"\n";
    std::cin>>m;
    int** a = new int* [n];
    for(int i = 0;i < n;i++){
        a[i] = new int [m];
    }
    std::cout<<"Fill the array: "<<"\n";
    for(int i = 0; i < n;++i){
        for(int j = 0;j < m;++j){
            std::cin>>a[i][j];
        }
    }

    Sortarr(a, n, m);
    std::cout<<"Sorted array:";
    for(int i = 0; i < n;++i){
        std::cout<<"\n";
        for(int j = 0;j < m;++j){
            std::cout<<a[i][j]<<" ";
        }
    }

    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
}

