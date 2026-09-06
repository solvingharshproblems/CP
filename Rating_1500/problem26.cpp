#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> arr;
void dfs(int u,int parent){
	arr[u]=1;
	for(int v:adj[u]){
		if(v==parent){
			continue;
		}
		dfs(v,u);
		arr[u]+=arr[v];
	}
}
int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	adj.assign(n+1,{});
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	if(n%2){
		cout<< "-1"<<endl;
		return 0;
	}
	arr.assign(n+1,0);
	dfs(1,-1);
	int res=0;
	for(int i=2;i<=n;i++){
		if(arr[i]%2==0){
			++res;
		}
	}
	cout<<res<<endl;
	return 0;
}