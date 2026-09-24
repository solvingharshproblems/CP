#include <bits/stdc++.h>
using namespace std;
const long long INF=4e18;
struct Edge{
    long long to,w;
};
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<Edge>> adj(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        long long w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vector<int> speed(n+1);
    for(int i=1;i<=n;i++){
        cin>>speed[i];
    }
    vector<vector<long long>> dist(n+1,vector<long long>(1001,INF));
    priority_queue<tuple<long long,int,int>,vector<tuple<long long,int,int>>,greater<tuple<long long,int,int>>> pq;
    dist[1][speed[1]]=0;
    pq.push({0,1,speed[1]});
    while(!pq.empty()){
        auto [time,u,spd]=pq.top();
        pq.pop();
        if(time!=dist[u][spd]){
            continue;
        }    
        for(auto [v,w]:adj[u]){
            long long newTime=time+w*spd;
            int newSpd=min(spd,speed[v]);
            if(newTime<dist[v][newSpd]){
                dist[v][newSpd]=newTime;
                pq.push({newTime,v,newSpd});
            }
        }
    }
    long long res=INF;
    for(int s=1;s<=1000;s++){
        res=min(res,dist[n][s]);
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