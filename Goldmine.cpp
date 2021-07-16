#include <bits/stdc++.h>
int arr[110][110];
using namespace std;
int Goldmine(int n,int m){
    int dp[101][101];
    for(int i=1;i<=n;i++){
        dp[i][m]=arr[i][m];
    }
    for(int j=m-1;j>=1;j--){
        for(int i=1;i<=n;i++){
            int a=INT_MIN,b=INT_MIN,c=INT_MIN;
            if(i-1>0)
            a=dp[i-1][j+1];
            b=dp[i][j+1];
            if(i+1<=n)
            c=dp[i+1][j+1];
            dp[i][j]=arr[i][j]+max(max(a,b),c);
            
        }
    }
    int res=INT_MIN;
    for(int i=1;i<=n;i++){
      res=max(dp[i][1],res);
    }
    return res;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<Goldmine(n,m);

    return 0;
}
