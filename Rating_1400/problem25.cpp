#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
	cin>>n;
    vector<int> a(n),b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
    vector<long long> dp1(n),dp2(n);
	dp1[0]=a[0]; 
	dp2[0]=b[0]; 
	for(int i=1;i<n;i++){ 
		dp1[i]=max(dp1[i-1],dp2[i-1]+a[i]);
		dp2[i]=max(dp2[i-1],dp1[i-1]+b[i]);
	}
	cout<<max(dp1[n-1],dp2[n-1])<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}