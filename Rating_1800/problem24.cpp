#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
vector<vector<int>> g;     
vector<long long> weights;          
int dfs(int u,int p,int n){
    int Size=1;
    for(int v:g[u]){
        if(v!=p){
            int s=dfs(v,u,n);
            weights.push_back(1LL*s*(n-s));
            Size+=s;
        }
    }
    return Size;
}
void solve(){
    int n;
    cin>>n;
    g.assign(n+1,{});
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    weights.clear();
    dfs(1,-1,n);
    sort(weights.begin(),weights.end());
    int m;
    cin>>m;
    vector<long long> f;
    while ((int)f.size()<n-1-m){
        f.push_back(1);
    }
    for(int i=0;i<m;i++){
        long long x;
        cin>>x;
        f.push_back(x);
    }
    sort(f.begin(),f.end());
    while((int)f.size()>n-1){
        long long x=f.back();
        f.pop_back();
        f.back()=(f.back()*x)%MOD;
    }
    long long res=0;
    for(int i=0;i<n-1;i++){
        res=(res+(weights[i]%MOD)*(f[i]%MOD))%MOD;
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