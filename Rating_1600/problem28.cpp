#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k,Z;
	cin>>n>>k>>Z;
	vector<int> a(n);
	for(auto &x:a){
		cin>>x;
	}
	long long res=0;
	for(int i=0;i<=Z && 2*i<=k;i++){
		int r=k-2*i; 
		long long base=accumulate(a.begin(),a.begin()+r+1,0LL);  
		int bestPair=0;
		for(int j=1;j<=min(r+1,n-1);j++){
			bestPair=max(bestPair,a[j]+a[j-1]);
		}
		long long ans=base+1LL*i*bestPair;
		res=max(res,ans);
	}
	cout<<res<<endl;
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