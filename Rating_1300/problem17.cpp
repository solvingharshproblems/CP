#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
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
    int res=0,x=0;
    for(int i=n-1;i>=0;i--){
        if(x<m && c[x]<=c[k[i]-1]){
            res+=c[x];
            x++;
        } 
        else{
            res+=c[k[i]-1];
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
    return 0;
}