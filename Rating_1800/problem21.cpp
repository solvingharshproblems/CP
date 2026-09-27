#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    string A,B;
    cin>>A>>B;
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    int res=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i<n){
                dp[i+1][j]=max(dp[i+1][j],dp[i][j]-1);
            }
            if(j<m){
                dp[i][j+1]=max(dp[i][j+1],dp[i][j]-1);
            }
            if(i<n && j<m && A[i]==B[j]){
                dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+2);
            }
            res=max(res,dp[i][j]);
        }
    }
    cout<<res<<endl;
    return 0;
}