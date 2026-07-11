#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(auto &it:a){
        cin>>it;
    }
    vector<long long> pre(n);
    pre[0]=a[0];
    for(long long i=1;i<n;i++){
        pre[i]=a[i]+pre[i-1];
    }
    long long res=0;
    for(long long i=1;i<=n;i++){
        if(n%i){
            continue;
        }
        long long x=i-1,Max=pre[x],Min=pre[x];
        for(long long j=x+i;j<n;j+=i){
            long long curr=pre[j]-pre[j-i];
            Max=max(Max,curr);
            Min=min(Min,curr);
        }
        res=max(res,Max-Min);
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