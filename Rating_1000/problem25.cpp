#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<long long> b(n);
    for(long long i=0;i<n;i++){
        cin>>b[i];
    }
    unordered_set<long long> us;
    for(long long i=0;i<n;i++){
        us.insert(b[i]);
    }
    if(us.size()<n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}