#include "iostream"
int main()
{
    long long m,n,sum=0;
    bool v=false;
    std::cin>>n>>m;
    long long a[n][m];
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            std::cin >> a[i][j];
        }
    }


    for(long long i=0;i<n;i++){
        for(long long j=0; j<m; j++){

            //angl
            if(i==0&&j==0){
                if(a[i][j]<a[i+1][j]&&a[i][j]<a[i][j+1]) v=true;
            }
            if(i==n-1&&j==0){
                if(a[i][j]<a[i-1][j]&&a[i][j]<a[i][j+1]) v=true;
            }

                if(i==0&&j==m-1){
                    if(a[i][j]<a[i+1][j]&&a[i][j]<a[i][j-1]) v=true;
                }

                if(i==n-1&&j==m-1){
                    if(a[i][j]<a[i-1][j]&&a[i][j]<a[i][j-1]) v=true;
                }

           //gg
            if(a[i][j]==a[i][0]){
                if(a[i][j]<a[i+1][j]&&a[i][j]<a[i-1][j]&&a[i][j]<a[i][j+1]) v=true;
            }
            //gg
            if(a[i][j]==a[i][m-1]){
                if(a[i][j]<a[i+1][j]&&a[i][j]<a[i-1][j]&&a[i][j]<a[i][j-1]) v=true;
            }
            //gg
            if(a[i][j]==a[0][j]){
                if(a[i][j]<a[i+1][j]&&a[i][j]<a[i][j+1]&&a[i][j]<a[i][j-1]) v=true;
            }

            //gg
            if(a[i][j]==a[n-1][j]){
                if(a[i][j]<a[i-1][j]&&a[i][j]<a[i][j+1]&&a[i][j]<a[i][j-1]) v=true;
            }
            if (a[i][j] < a[i + 1][j] && a[i][j] < a[i - 1][j] && a[i][j] < a[i][j + 1] && a[i][j] < a[i][j - 1])
                v = true;
            else v=false;
            if(v) sum++;
        }
    }
            if (n==1&&m==2){
                if (a[0][1]!=a[0][0]){
                    v=true;
                }
            }
            if (n==2&&m==1){
                if (a[0][0] != a[1][0]){
                    v=true;
                }
            }
            if(v) sum++;
    std::cout<<sum;
    return 0;
}
