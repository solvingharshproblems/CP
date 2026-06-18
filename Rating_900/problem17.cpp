#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    int curr=0,res=0;
    for(auto i:mp){
        curr=max(curr,i.second);
    }
    while(curr<n){
        res++;
        if(curr*2<=n){
            res+=curr;
            curr*=2;
        }
        else{
            res+=n-curr;
            curr=n;
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