#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
#define int long long
void solve(){
    int n;
	cin>>n;
	vector<int> w(n+1);
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	vector<vector<int>> adj(n+1);
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> arr;  
	int res=0;     
	for(int i=1;i<=n;i++){
		res+=w[i]; 
		int size=adj[i].size();
		for(int j=0;j<size-1;j++){
			arr.push_back(w[i]);
		}
	}
	sort(arr.rbegin(),arr.rend()); 
	cout<<res<<' '; 
	for(auto x:arr){
		res+=x; 
	    cout<<res<<' ';
	}
	cout<<endl;
}
int32_t main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}