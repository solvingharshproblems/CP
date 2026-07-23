#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<long long,bool> mp;
    for(auto it:a){
        mp[it]=true;
    }
    for(int i=0;i<n;i++){
        if(mp.find(a[i]-k)!=mp.end()){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}