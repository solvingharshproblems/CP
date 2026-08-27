#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    map<int,int> mp;
    int cnt=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp%k){
            mp[k-temp%k]++;
            cnt++;
        }
    }
    if(cnt==0){
        cout<<0<<endl;
        return;
    }
    int a=0,b=0;
    for(auto [x,y]:mp){
        if(a<=y){
            a=y;
            b=x;
        }
    }
    cout<<1LL*(a-1)*k+b+1<<endl;
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