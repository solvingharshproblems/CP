#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
vector<vector<int>> g;
long long Sum;
long long modpow(long long a,long long b){
    long long r=1;
    while(b){
        if(b&1){
            r=(r*a)%MOD;
        }
        a=(a*a)%MOD;
        b>>=1;
    }
    return r;
}
long long dfs(int u,int p){
    long long Max=1;
    for(int v:g[u]){
        if(v==p){
            continue;
        }
        Max=max(Max,1+dfs(v,u));
    }
    Sum=(Sum+Max)%MOD;
    return Max;
}
void solve() {
    int n;
    cin>>n;
    g.assign(n+1,{});
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    Sum=0;
    dfs(1,0);
    long long res=modpow(2,n-1)*Sum%MOD;
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