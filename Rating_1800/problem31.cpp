#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<long long> trees(n);
    for(int i=0;i<n;i++){
        cin>>trees[i];
    }
    map<long long,long long> dist;
    queue<long long> q;
    for(long long x:trees){
        dist[x]=0;
        q.push(x);
    }
    vector<long long> res;
    long long total=0;
    while(!q.empty() && (int)res.size()<m){
        long long cur=q.front();
        q.pop();
        for(int d=-1;d<=1;d+=2){
            long long x=cur+d;
            if(dist.find(x)!=dist.end()){
                continue;
            }
            dist[x]=dist[cur]+1;
            q.push(x);
            res.push_back(x);
            total+=dist[x];
            if((int)res.size()==m){
                break;
            }
        }
    }
    cout<<total<<endl;
    for(int i=0;i<m;i++){
        if(i){
            cout<<' ';
        }
        cout<<res[i];
    }
    cout<<endl;
    return 0;
}