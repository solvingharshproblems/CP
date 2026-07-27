#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<long long>> v(m,vector<long long>(n));
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<m;i++){
        sort(v[i].begin(),v[i].end());
    }
    long long res=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res-=(v[i][j]*(n-j-1));
            res+=(v[i][j]*j);
        }
    }
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}