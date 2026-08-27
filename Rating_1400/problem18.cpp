#include <bits/stdc++.h>
using namespace std;
const int N=200000,MOD=1e9+7;
vector<int> fact(N+1);
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int total=a[0];
    for(int i=1;i<n;i++){
        total&=a[i];
    }
    int cnt=count(a.begin(),a.end(),total);
    if(cnt<=1){
        cout<<0<<endl;
        return;
    }
    cout<<1LL*cnt*(cnt-1)%MOD*fact[n-2]%MOD<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=(1LL*fact[i-1]*i)%MOD;
    }
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}