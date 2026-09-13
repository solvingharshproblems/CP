#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long mul(long long a,long long b,long long m=MOD){
    return ((a%m)*(b%m))%m;
}
long long modexp(long long a,long long e,long long m=MOD){
    a%=m;
    long long r=1;
    while(e){
        if(e&1){
            r=mul(r,a,m);
        }
        a=mul(a,a,m);
        e>>=1;
    }
    return r;
}
long long inv(long long a,long long m=MOD){
    return modexp(a,m-2,m);
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &x:a){
        cin>>x;
    }
    sort(a.rbegin(),a.rend());
    int N=0,R=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[k-1]){
            N++;
            if(i<k){
                R++;
            }
        }
    }
    long long res=1;
    for(int i=1;i<=R;i++){
        res=mul(res,N-i+1);
        res=mul(res,inv(i));
    }
    cout<<res<<endl;
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}