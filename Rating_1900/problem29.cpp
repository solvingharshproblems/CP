#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const int N=200005;
vector<int> g[N];
int parent[N],depth[N];
bool used[N];
int n,k;
void dfs(int u){
    used[u]=true;
    for(int v:g[u]){
        if(!used[v]){
            dfs(v);
        }
    }
}
bool check(int H,vector<int>& order){
    fill(used+1,used+n+1,false);
    int cuts=0;
    for(int u:order){
        if(depth[u]<=H){
            break;
        }
        if(used[u]){
            continue;
        }
        int v=u;
        for(int i=0;i<H-1;i++){
            v=parent[v];
        }
        dfs(v);
        cuts++;
        if(cuts>k){
            return false;
        }
    }
    return true;
}
void solve(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        g[i].clear();
    }
    parent[1]=0;
    for(int i=2;i<=n;i++){
        cin>>parent[i];
        g[parent[i]].push_back(i);
    }
    queue<int> q;
    q.push(1);
    depth[1]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for (int v:g[u]){
            depth[v]=depth[u]+1;
            q.push(v);
        }
    }
    vector<int> order(n);
    iota(order.begin(),order.end(),1);
    sort(order.begin(),order.end(),[&](int a,int b){
        return depth[a]>depth[b];
    });
    int low=1,high=n,res=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(mid,order)){
            res=mid;
            high=mid-1;
        } 
        else{
            low=mid+1;
        }
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