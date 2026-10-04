#include <bits/stdc++.h>
using namespace std;
struct Chunk{
    long long pref;
    long long sum;
};
struct Node{
    long long minPref;
    long long sum;
    int id;
    int index;
    bool operator<(const Node &other) const {
        return minPref<other.minPref;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x;
    int k;
    cin>>x>>k;
    vector<vector<Chunk>> lists(k);
    for(int i=0;i<k;i++){
        int n;
        cin>>n;
        long long sum=0;
        long long Min=0;
        for(int j=0;j<n;j++){
            long long w;
            cin>>w;
            sum+=w;
            Min=min(Min,sum);
            if(sum>0){
                lists[i].push_back({Min,sum});
                sum=0;
                Min=0;
            }
        }
    }
    priority_queue<Node> pq;
    for(int i=0;i<k;i++){
        if(!lists[i].empty()){
            pq.push({lists[i][0].pref,lists[i][0].sum,i,0});
        }
    }
    while(!pq.empty()){
        auto cur=pq.top();
        pq.pop();
        if(x+cur.minPref<0){
            break;
        }
        x+=cur.sum;
        int nxt=cur.index+1;
        if(nxt<(int)lists[cur.id].size()){
            auto &c=lists[cur.id][nxt];
            pq.push({c.pref,c.sum,cur.id,nxt});
        }
    }
    cout<<x<<endl;
    return 0;
}