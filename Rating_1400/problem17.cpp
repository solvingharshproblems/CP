#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> u(n),s(n);
    for(int i=0;i<n;i++){
        cin>>u[i];
    }
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    vector<vector<int>> skills(n);
    for(int i=0;i<n;i++){
        skills[u[i]-1].push_back(s[i]);
    }
    for(auto &v:skills){
        sort(v.begin(),v.end());
    }
    vector<vector<long long>> pre(n,vector<long long>(1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<(int)skills[i].size();j++){
            pre[i].push_back(pre[i].back()+skills[i][j]);
        }
    }
    vector<long long> res(n+1);
    for(int i=0;i<n;i++){
        int nums=(int)skills[i].size();
        for(int k=1;k<=nums;k++){
            res[k]+=pre[i].back()-pre[i][nums%k];
        }
    }
    for(int i=1;i<=n;i++){
        cout<<res[i]<<' ';
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