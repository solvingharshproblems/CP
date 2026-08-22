#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> color;
int cnt[2]={0,0};
int dfs(int u,int parent){
    cnt[color[u]]++;
    for(int v:adj[u]){
        if(v==parent){
            continue;
        }
        color[v]=1-color[u];
        dfs(v,u);
    }
}
int main(){
    int n,u,v;
    cin>>n;
    adj.resize(n+1);
    color.assign(n+1,-1);
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    color[1]=0;
    dfs(1,-1);
    long long res=1LL*cnt[0]*cnt[1]-(n-1);
    cout<<res<<endl;
    return 0;
}