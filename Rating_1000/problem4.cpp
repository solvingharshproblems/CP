#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<long long> arr(n); 
	long long min1=INT_MAX; 
	for(int i=0;i<n;i++){
		long long m;
		cin>>m; 
		vector<long long> a(m); 
		for(auto &x:a){ 
			cin>>x;
        }
		sort(a.begin(),a.end()); 
		arr[i]=a[1]; 
		min1=min(min1,a[0]); 
	}
	sort(arr.begin(),arr.end()); 
	long long sum=accumulate(arr.begin(),arr.end(),0LL); 
	long long min2=arr[0]; 
	long long res=min1+sum-min2; 
	cout<<res<<endl; 
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}