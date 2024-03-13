#include "iostream"
int main()
    {
    long long m,n,y=1,min;
    while(y) {
        std::cout<< "Done by Stanislav Maslakov, group 353501, task 1, variant 12.This program finds the minimum element in each column of the array"<<"\n";
        std::cout<<"Enter the number of strings and columns"<<"\n";
        std::cin >> n >> m;
        int a[n][m];
        std::cout<<"Fill the array"<<"\n";
        for(int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cin >> a[i][j];
            }
        }
        for (int j = 0; j < m; j++){
            min=a[0][j];
             for (int i = 0; i < n; i++){
                if (a[i][j]<min){
                    min=a[i][j];
                }
             }
             std::cout<<"minimum element in the column "<<j+1<<"="<<min<<"\n";
        }

        std::cout << "If u want to restart the program enter 1,if u don't want to restart the program inter 0" << "\n";
        std::cin>>y;
    }
}

