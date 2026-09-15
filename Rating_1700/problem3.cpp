#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int dfs(int x,int p,int dep,vector<vector<int>> &adj,vector<vector<int>> &d){
    int Max=dep;
    for(auto &y:adj[x]){
        if(y==p){
            continue;
        }
        Max=max(Max,dfs(y,x,dep+1,adj,d));
    }
    d[dep].push_back(Max);
    return Max;
}
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> adj(n);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> d(n);
    dfs(0,-1,0,adj,d);
    int res=n;
    multiset<int> s;
    for(int i=0;i<n;i++){
        for(auto &x:d[i]){
            s.insert(x);
        }
        while(!s.empty() && (*s.begin())<i){
            s.erase(s.begin());
        }
        res=min(res,n-(int)s.size());
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