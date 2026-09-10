#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(dp[i-1] && i+x<=n){
            dp[i+x]=1;
        }
        if(i-x-1>=0){
            dp[i]=dp[i] || dp[i-x-1];
        }
    }
    cout<<(dp[n]?"YES\n":"NO\n");
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