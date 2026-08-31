#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
	cin>>n;
	vector<int> a(n);
	for(auto &i:a){
        cin>>i;
	}
	vector<int> dp(n+1);
	dp[n]=0; 
	for(int i=n-1;i>=0;i--){
		dp[i]=dp[i+1]+1;
    	int j=i+a[i]+1;
		if(j<=n){
			dp[i]=min(dp[i],dp[j]);
		}
	}
	cout<<dp[0]<<endl; 
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