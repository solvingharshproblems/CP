#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<vector<pair<int,int>>> g(n);
    vector<int> forced(n,-1);
    for(int idx=0;idx<q;++idx){
        int u,v,x;
        cin>>u>>v>>x;
        --u;
        --v;
        if(u==v){
            forced[u]=x;
        } 
        else{
            g[u].push_back({v,x});
            g[v].push_back({u,x});
        }
    }
    vector<int> a(n,0);
    for(int i=0;i<30;i++){
        vector<int> val(n,1);
        for(int j=0;j<n;j++){
            if(forced[j]!=-1){
                val[j]=(forced[j]>>i)&1;
            }
        }
        for(int j=0;j<n;j++){
            for(auto [k,x]:g[j]){
                if(((x>>i)&1)==0){
                    val[j]=0;
                }
            }
        }
        for(int j=0;j<n;j++){
            if(val[j]==0 || forced[j]!=-1){
                continue;
            }
            bool mustKeepOne=false;
            for(auto [k,x]:g[j]){
                if(((x>>i)&1) && val[k]==0){
                    mustKeepOne=true;
                    break;
                }
            }
            if(!mustKeepOne){
                val[j]=0;
            }
        }
        for(int j=0;j<n;j++){
            if(val[j]){
                a[j]|=(1<<i);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<(i+1==n?'\n':' ');
    }
    return 0;
}