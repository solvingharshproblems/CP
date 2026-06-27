#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_set<char> us;
    vector<int> prefix(n+1,0),suffix(n+1,0);
    for(int i=1;i<=n;i++){
        us.insert(s[i-1]);
        prefix[i]=us.size();
    }
    us.clear();
    for(int i=n;i>=1;i--){
        us.insert(s[i-1]);
        suffix[i]=us.size();
    }
    int res=0;
    for(int i=1;i<n;i++){
        res=max(res,prefix[i]+suffix[i+1]);
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