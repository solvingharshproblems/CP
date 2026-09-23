#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
#define int long long
void solve(){
    int n;
    long long c;
    cin>>n>>c;
    vector<long long> s(n);
    int odd=0;
    for(auto &x:s){
        cin>>x;
        odd+=x%2;
    }
    int even=n-odd;
    long long U=((c+1)*(c+2))/2;
    long long A=0;
    for(long long val:s){
        A+=1+val/2;
    }
    long long B=0;
    for(long long val:s){
        B+=c-val+1;
    }
    long long AB=((odd+1)*odd)/2+((even+1)*even)/2;
    long long res=U-A-B+AB;
    cout<<res<<endl;
}
signed main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}