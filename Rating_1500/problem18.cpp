#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back({v,i});
        adj[v].push_back({u,i});
    }
    vector<int> res(n-1,-1);
    int k=0;
    for(int i=1;i<=n;i++){
        if(adj[i].size()>=3){
            res[adj[i][0].second]=0;
            res[adj[i][1].second]=1;
            res[adj[i][2].second]=2;
            k=3;
            break;
        }
    }
    for(int i=0;i<n-1;i++){
        if(res[i]==-1){
            res[i]=k++;
        }
    }
    for(auto x:res){
        cout<<x<<endl;
    }
    return 0;
}