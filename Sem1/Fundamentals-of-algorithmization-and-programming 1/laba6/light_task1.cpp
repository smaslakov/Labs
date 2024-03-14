#include "iostream"
int main() {
    int n, q = -1;
    std::cout<<"Enter the size of the array"<<"\n";
    std::cin>>n;
    int* arr = new int [n];
    std::cout<<"Fill the array"<<"\n";
    for( int i = 0; i < n; i++){
        std::cin>>arr[i];
    }
    for (int i = n - 1; i > -1; i--) {
        q++;
        for (int j = n - 1; j > -1 + q; j--){
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    std::cout<<"Sorted array:";
    for( int i = 0; i < n; i++) {
        std::cout<<arr[i]<< " ";
    }
    delete [] arr;
}
