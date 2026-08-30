#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr[n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                arr[i].push_back(j);
                if(i/j!=j){
                    arr[i].push_back(i/j);
                }
            }
        }
    }
    vector<vector<int>> dp(k+1,vector<int>(n+1));
    for(int i=1;i<=n;i++){
        dp[1][i]=1;
    }
    for(int i=2;i<=k;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=0;
            for(auto x:arr[j]){
                dp[i][j]=(dp[i][j]+dp[i-1][x])%MOD;
            }
        }
    }
    int res=0;
    for(int i=1;i<=n;i++){
        res=(res+dp[k][i])%MOD;
    }
    cout<<res<<endl;
    return 0;
}