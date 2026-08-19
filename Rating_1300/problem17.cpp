#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
#define int long long
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> k(n);
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    vector<int> c(m);
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    sort(k.begin(),k.end());
    int res=0,p=0;
    for(int i=n-1;i>=0;i--){
        if(p<m && c[p]<=c[k[i]-1]){
            res+=c[p];
            p++;
        } 
        else{
            res+=c[k[i]-1];
        }
    }
    cout<<res<<endl;
}
int32_t main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}