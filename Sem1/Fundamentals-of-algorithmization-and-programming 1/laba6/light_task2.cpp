#include "iostream"
int main() {
    int n ;
    std::cout<<"Enter the size of the array"<<"\n";
    std::cin>>n;
    int* arr = new int [n];
    std::cout<<"Fill the array"<<"\n";
    for( int i = 0; i < n; i++){
        std::cin>>arr[i];
    }

    for (int i = 0; i < n / 2 - 1; i++) {
        for (int j = 0; j < n / 2 - i - 1; j++){
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = n / 2 + 1; i < n; i++) {
        int current = arr[i];
        for (int j = i - 1; j >= n / 2 - 1; j--) {
            if (j >= n / 2 && arr[j] > current) {
                arr[j + 1] = arr[j]; }
            else {
                arr[j + 1] = current;
                break;
            }
        }
    }

    std::cout<<"First part: ";
    for( int i = 0; i < n / 2; i++) {
        std::cout<<arr[i]<< " ";
    }
    std::cout<<"\n"<<"Second part: ";
    for( int i = n / 2; i < n; i++) {
        std::cout<<arr[i]<< " ";
    }

    delete [] arr;
}

