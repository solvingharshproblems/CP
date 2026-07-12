#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k,s,t;
    cin>>n>>k>>s>>t;
    vector<long long> x(n+1),y(n+1);
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    long long res=abs(x[s]-x[t])+abs(y[s]-y[t]);
    long long minS=1e17,minT=1e17;
    for(int i=1;i<=k;i++){
        minS=min(minS,abs(x[s]-x[i])+abs(y[s]-y[i]));
        minT=min(minT,abs(x[t]-x[i])+abs(y[t]-y[i]));
    }
    res=min(res,minS+minT);
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}