#include <bits/stdc++.h>
using namespace std;
const int LIM=200000;
const int SIZE=2*LIM+1;
vector<bool> hasU(SIZE,false),hasV(SIZE,false);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,q;
    cin>>n>>m>>q;
    vector<long long> a(n),b(m);
    long long A=0,B=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        A+=a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
        B+=b[j];
    }
    for(int i=0;i<n;i++){
        long long u=A-a[i];
        if(llabs(u)<=LIM){
            hasU[u+LIM]=true;
        }
    }
    for(int j=0;j<m;j++){
        long long v=B-b[j];
        if(llabs(v)<=LIM){
            hasV[v+LIM]=true;
        }
    }
    auto check=[&](long long d,long long e,long long x,bool &ok){
        if(llabs(d)>LIM || llabs(e)>LIM){
            return;
        }
        if(d*e!=x){
            return;
        }
        if(hasU[d+LIM] && hasV[e+LIM]){
            ok=true;
        }
    };
    while(q--){
        long long x;
        cin>>x;
        long long ax=llabs(x);
        bool ok=false;
        for(long long d=1;d*d<=ax && !ok;d++){
            if(ax%d){
                continue;
            }
            long long e=ax/d;
            check(d,e,x,ok);
            check(e,d,x,ok);
            check(-d,-e,x,ok);
            check(-e,-d,x,ok);
            check(d,-e,x,ok);
            check(-d,e,x,ok);
            check(e,-d,x,ok);
            check(-e,d,x,ok);
        }
        cout<<(ok?"YES\n":"NO\n");
    }
    return 0;
}