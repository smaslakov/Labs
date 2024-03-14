
#include "iostream"
int main() {
    int y = 1;
    while (y) {
        std::cout
                << "Done by Stanislav Maslakov, group 353501, task 3, variant 12."
                <<"This program obtains an integer square matrix in which an element is equal to 1 if the corresponding element of the original matrix is greater than the element located on the main diagonal, and equal to 0 otherwise"
                << "\n";
        std::cout << "Enter the number of strings and columns" << "\n";
        int n;
        std::cin >> n;
        long double **a = new long double *[n];
        for (int i = 0; i < n; i++) {
            a[i] = new long double[n];
        }
        std::cout<<"Fill the array"<<"\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cin >> a[i][j];
            }
        }

        long long **b = new long long *[n];
        for (int i = 0; i < n; i++) {
            b[i] = new long long [n];
        }
        for (int i = 0; i < n; i++) {
            long double count = a[i][i];
            for (int j = 0; j < n; ++j) {
                if (a[i][j] > count) {
                    b[i][j] = 1;
                } else {
                    b[i][j] = 0;
                }
            }
        }

        std::cout << "New array-" << "\n";
        for(long long i=0;i<n;i++){
            for (long long j=0;j<n-1;j++){
                std::cout<<b[i][j]<<" ";
            }
            std::cout<<b[i][n-1]<<"\n";
        }
delete[] a;
delete[] b;
        std::cout << "If u want to restart the program enter 1,if u don't want to restart the program inter 0" << "\n";
        std::cin>>y;
    }
}