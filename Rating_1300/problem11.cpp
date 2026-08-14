#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int res=0;
int dfs(int node,vector<vector<int>>& adj,string& s){
    if(adj[node].size()==0){
        return s[node-1] == 'W' ? 1 : -1;
    }
    int count=0;
    for(auto child:adj[node]){
        count+=dfs(child,adj,s);
    }
    count+=(s[node-1] == 'W' ? 1 : -1);
    if(count==0) {
        res++;
    }
    return count;
}
void solve(){
    res=0;
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1,vector<int>());
    for(int i=0;i<n-1;i++){
        int temp;
        cin>>temp;
        adj[temp].push_back(i+2);
    }
    string s;
    cin>>s;
    dfs(1,adj,s);
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}