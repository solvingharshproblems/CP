#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    vector<vector<int>> pos(n+1);
    for(int i=0;i<n;i++){
        pos[a[i]].push_back(i);
    }
    vector<int> res(n,-1);
    for(int i=1;i<=n;i++){
        if(pos[i].empty()){
            continue;
        }
        int Max=pos[i][0]+1;
        for(int j=1;j<(int)pos[i].size();j++){
            Max=max(Max,pos[i][j]-pos[i][j-1]);
        }
        Max=max(Max,n-pos[i].back());
        for(int j=Max-1;j<n;j++){
            if(res[j]!=-1){
                break;
            }
            res[j]=i;
        }
    }
    for(auto i:res){
        cout<<i<<' ';
    }
    cout<<endl;
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