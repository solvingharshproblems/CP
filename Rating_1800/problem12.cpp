#include <bits/stdc++.h>
using namespace std;
const long long INF=1e18;
struct Edge {
    int to;
    long long w;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin>>N>>M;
    vector<vector<Edge>> adj(2*N+1);
    for(int i=0;i<M;i++){
        int u,v;
        long long w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v+N].push_back({u+N,w});
    }
    for(int u=1;u<=N;u++){
        adj[u].push_back({u+N,0});
    }
    vector<long long> dist(2*N+1,INF);
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<>> pq;
    int start=1;
    dist[start]=0;
    pq.push({0,start});
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d!=dist[u]){
            continue;
        }
        for(auto &e:adj[u]){
            if(dist[e.to]>d+e.w){
                dist[e.to]=d+e.w;
                pq.push({dist[e.to],e.to});
            }
        }
    }
    for(int i=2;i<=N;i++){
        long long res=min(dist[i],dist[i+N]);
        if(res==INF){
            res=-1;
        }
        cout<<res<<" ";
    }
    cout<<endl;
    return 0;
}