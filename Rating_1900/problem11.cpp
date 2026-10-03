#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<string> g(n),w(n);
    for(int i=0;i<n;i++){
        cin>>g[i]>>w[i];
    }
    vector<vector<int>> adj(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && (g[i]==g[j] || w[i]==w[j])){
                adj[i][j]=1;
            }
        }
    }
    int N=1<<n;
    vector<vector<int>> dp(N,vector<int>(n,0));
    for(int i=1;i<N;i++){
        for(int j=0;j<n;j++){
            if(!(i & (1<<j))){
                continue;
            }
            if(i==(1<<j)){
                dp[i][j]=1;
                continue;
            }
            int prev=i^(1<<j);
            for(int k=0;k<n;k++){
                if((prev & (1<<k)) && dp[prev][k] && adj[k][j]){
                    dp[i][j]=1;
                    break;
                }
            }
        }
    }
    int best=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<n;j++){
            if(dp[i][j]){
                best=max(best,__builtin_popcount(i));
            }
        }
    }
    cout<<n-best<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}