#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int> dp(n+1,1);
    for(int i=2;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            if(i%j!=0){
                continue;
            }
            if(a[j]<a[i]){
                dp[i]=max(dp[i],1+dp[j]);
            }
            int k=i/j;
            if(a[k]<a[i]){
                dp[i]=max(dp[i],1+dp[k]);
            }
        }
    }
    cout<<*max_element(dp.begin(),dp.end())<<endl;
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