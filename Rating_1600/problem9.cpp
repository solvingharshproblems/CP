#include <bits/stdc++.h>
using namespace std;
const long long MOD=998244353;
long long add(long long a,long long b,long long m=MOD){
    return ((a%m)+(b%m)+m)%m;
}
long long sub(long long a,long long b,long long m=MOD){
    return ((a%m)-(b%m)+m)%m;
}
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
int main(){
    int n;
    cin>>n;
    int T=n/3;
    int K=n/6;
    long long res=1;
    for(int i=1;i<=K;i++){
        res=mul(res,T-i+1);
        res=mul(res,inv(i));
    }
    vector<int> e(3);
    for(int i=0;i<n;i++){
        int w;
        cin>>w;
        e[i%3]=w;
        if(i%3==2){
            sort(e.begin(),e.end());
            int m=1;
            if(e[0]==e[1]){
                ++m;
            }
            if(e[0]==e[2]){
                ++m;
            }
            res=mul(res,m);
        }
    }
    cout<<res;
    return 0;
}