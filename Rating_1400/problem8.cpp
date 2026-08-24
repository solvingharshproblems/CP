#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
vector<vector<int>> adj;
vector<int> dp;
map<pair<int,int>,int> index;
void dfs(int v,int parent){
    for(auto x:adj[v]) {
        if(x==parent){
            continue;
        }
        if(index[{parent,v}]<index[{v,x}]){
            dp[x]=dp[v];
        } 
        else{
            dp[x]=dp[v]+1;
        }
        dfs(x,v);
    }
}
void solve(){
    int n;
    cin>>n;
    adj.assign(n,vector<int>());
    dp.assign(n,0);
    index.clear();
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        --a;
        --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        index[{a,b}]=i;
        index[{b,a}]=i;
    }
    index[{-1,0}]=-1;
    dp[0]=1;
    dfs(0,-1);
    cout<<*max_element(dp.begin(),dp.end())<<endl;
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