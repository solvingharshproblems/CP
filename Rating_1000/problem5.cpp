#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
bool compare(pair<long long, long long> a,pair<long long,long long> b){
    if(a.first!=b.first){
        return a.first>b.first;
    }
    return a.second<b.second;
}
void solve(){
    long long n,k;
	cin>>n>>k; 
	vector<pair<long long,long long>> a(n);
	for(long long i=0;i<n;i++){
		long long x;
		cin>>x; 
		a[i]={x,i+1};
	}
	for(long long i=0;i<n;i++){
		a[i].first=a[i].first%k;
		if(a[i].first==0){
			a[i].first=k;
        }
	}
	sort(a.begin(),a.end(),compare);
	for(auto it:a){
		cout<<it.second<<" ";
    }
	cout<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}