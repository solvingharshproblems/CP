#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp;
    int count=0;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        if(mp[s[i]]==1){
            count++;
        }
        arr[i]=count;
    }
    long long res=0;
    for(int i=0;i<n;i++){
        res+=arr[i];
    }
    cout<<res<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}