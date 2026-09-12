#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
static void dfs(int x,int p,const vector<pair<int,int>>& bounds,const vector<vector<int>>& adj,vector<array<long long,2>>& dp){
    for(int y:adj[x]){
        if(y==p){
            continue;
        }
        dfs(y,x,bounds,adj,dp);
        dp[x][0]+=max(dp[y][0]+llabs(bounds[x].first-bounds[y].first),dp[y][1]+llabs(bounds[x].first-bounds[y].second));
        dp[x][1]+=max(dp[y][0]+llabs(bounds[x].second-bounds[y].first),dp[y][1]+llabs(bounds[x].second-bounds[y].second));
    }
}
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> bounds(n);
    for(auto& pr:bounds){
        cin>>pr.first>>pr.second;
    }
    vector<vector<int>> adj(n);
    for(int i=0;i<n-1;i++){
        int u,w;
        cin>>u>>w;
        --u;
        --w;
        adj[u].push_back(w);
        adj[w].push_back(u);
    }
    vector<array<long long,2>> dp(n,{0,0});
    dfs(0,-1,bounds,adj,dp);
    cout<<max(dp[0][0],dp[0][1])<<endl;
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