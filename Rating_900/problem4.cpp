#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long a,b,n;
    cin>>a>>b>>n;
    vector<long long> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    long long res=b;
    for(int i=0;i<n;i++){
        res+=min(x[i],a-1);
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