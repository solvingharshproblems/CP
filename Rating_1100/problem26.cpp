#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> suffix(n);
    map<int,int> mp;
    int sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=arr[i];
        mp[sum]=i;
        suffix[i]=sum;
    }
    int res=0,prefix=0;
    for(int i=0;i<n;i++){
        mp.erase(suffix[i]);
        prefix+=arr[i];
        if(mp.find(prefix)!=mp.end()){
            res=max(res,(i+1)+(n-mp[prefix]));
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