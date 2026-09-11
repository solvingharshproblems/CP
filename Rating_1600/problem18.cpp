#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Max=1e3;
	vector<int> dp(Max+1,INT_MAX);
	dp[1]=0; 
	for(int i=1;i<=Max;i++){
		for(int x=1;x<=i;x++){
			int val=i+(i/x); 
			if(val<=Max){
				dp[val]=min(dp[val],dp[i]+1);
			}
		}
	}
    int t=1;
    cin>>t;
    while(t--){
        int n,k;
		cin>>n>>k;
		vector<int> b(n);
		for(auto &x:b){
			cin>>x;
			x=dp[x]; 
		}
		vector<int> c(n);
		for(auto &x:c){
			cin>>x; 
		}
		vector<int> kdp(12*n+1,0); 
		for(int j=0;j<n;j++){
			for(int i=12*n;i>=b[j];i--){
				kdp[i]=max(kdp[i],kdp[i-b[j]]+c[j]);
			}
		}
		cout<<kdp[min(k,12*n)]<<endl;
    }
}