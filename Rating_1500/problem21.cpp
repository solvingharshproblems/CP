#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7; 
int pow(int x,int n){
	x%=MOD;
	if(n==0){
        return 1;
	}
	if(n==1){
        return x;
	}
	int p=pow(x*x,n/2);
	if(n%2){
        return p*x%MOD;
	}
	return p;
}
vector<vector<int>> adj;
vector<int> vis;
int Size;
void dfs(int x){
	vis[x]=1;
	Size++;
	for(auto &i:adj[x]){
		if(!vis[i]){
            dfs(i);
		}
	}
}
int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	cin>>n>>k;
	adj.assign(n+1,{});
	for(int i=0;i<n-1;i++){
		int u,v,x;
		cin>>u>>v>>x;
		if(x==0){
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	}
	int res=0;
	vis.assign(n+1,0);
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			Size=0;
			dfs(i);
			res=(res+pow(Size,k))%MOD;
		}
	}
	res=(pow(n,k)-res+MOD)%MOD;
	cout<<res<<endl;
	return 0;
}
