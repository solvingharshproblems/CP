#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<bool> good(n);
    vector<vector<int>> adj(n);
    for(int i=0;i<n;i++){
        int parent,type;
        cin>>parent>>type;
        if(type==0){
            good[i]=true;
        }
        if(parent!=-1){
            adj[parent-1].push_back(i);
        }
    }
    vector<int> res;
    for(int i=0;i<n;i++){
        if(good[i]){
            continue;
        }
        bool flag=true;
        for(auto x:adj[i]) {
            if(good[x]){
                flag=false;
            }
        }
        if(flag){
            res.push_back(i+1);
        }
    }
    if(res.size()){
        for(auto x:res){
            cout<<x<<' ';
        }
        cout<<endl;
    } 
    else{
        cout<<-1<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}