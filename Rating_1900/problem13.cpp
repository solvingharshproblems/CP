#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long power(long long a,long long b){
    long long r=1;
    while(b){
        if(b&1){
            r=r*a%MOD;
        }
        a=a*a%MOD;
        b>>=1;
    }
    return r;
}
void solve(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long S=0;
    for(int i=0;i<m;i++){
        long long a,b,f;
        cin>>a>>b>>f;
        S=(S+f)%MOD;
    }
    long long T=n*(n-1)/2;
    long long K2=k*(k-1)/2;
    long long invT=power(T%MOD,MOD-2);
    long long term1=(k%MOD)*(S%MOD)%MOD*invT%MOD;
    long long term2=(m%MOD)*(K2%MOD)%MOD*invT%MOD*invT%MOD;
    long long res=(term1+term2)%MOD;
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}