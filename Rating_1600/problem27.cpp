#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<int,int> mp;
    mp[0]++;
    int pref=0;
    for(int i=0;i<n;i++){
        pref+=(s[i]-'0');
        mp[pref-(i+1)]++;
    }
    long long res=0;
    for(auto &[key,count]:mp){
        res+=(long long)count*(count-1)/2;
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
}