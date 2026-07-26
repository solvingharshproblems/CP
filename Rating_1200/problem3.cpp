#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long __gcd(long long a,long long b){
    if(b==0) return a;
    return __gcd(b,a%b);
}
long long LCM(long long a,long long b){
    return (a*b)/__gcd(a,b);
}
void solve(){
    long long n,x,y;
    cin>>n>>x>>y;
    long long both=n/LCM(x,y);
    long long positive=n/x-both;
    long long negative=n/y-both;
    long long res=0;
    for(long long i=n;i>n-positive;i--){
        res+=i;
    }
    for(long long i=1;i<=negative;i++){
        res-=i;
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