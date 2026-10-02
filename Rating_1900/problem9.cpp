#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const int N=200005;
vector<int> adj[N];
int tin[N],low[N],sz[N];
bool vis[N];
int timer;
long long res;
int n,m;
void dfs(int u,int p){
    vis[u]=true;
    tin[u]=low[u]=++timer;
    sz[u]=1;
    for(int v:adj[u]){
        if(v==p){
            continue;
        }
        if(vis[v]){
            low[u]=min(low[u],tin[v]);
        } 
        else{
            dfs(v,u);
            sz[u]+=sz[v];
            low[u]=min(low[u],low[v]);
            if(low[v]>tin[u]){
                long long x=sz[v];
                long long y=n-x;
                res=min(res,x*(x-1)/2+y*(y-1)/2);
            }
        }
    }
}
void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        adj[i].clear();
        vis[i]=false;
    }
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    timer=0;
    res=1LL*n*(n-1)/2;
    dfs(1,-1);
    cout<<res<<endl;
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}