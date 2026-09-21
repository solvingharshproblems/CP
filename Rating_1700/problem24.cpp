#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> x(n);
    map<int, vector<int>> u;
    for(int i=0;i<n;i++){
        cin>>x[i];
        u[x[i]].push_back(i);
    }
    int ans=1,l=0,r=0;
    for(auto &[a,v]:u){
        int mn=INT_MAX,mn_pos=0,cnt=0;
        for(auto i:v){
            if(cnt*2-i<mn){
                mn=cnt*2-i;
                mn_pos=i;
            }
            cnt++;
            if(cnt*2-i-mn>ans){
                ans=cnt*2-i-mn;
                l=mn_pos;
                r=i;
            }
        }
    }
    cout<<x[l]<<" "<<l+1<<" "<<r+1<<endl;
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