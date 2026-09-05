#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(auto &x:a){
        cin>>x;
    }
    for(auto &x:b){
        cin>>x;
    }
    map<pair<int,int>,int> freq;
    int res=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(b[i]==0){
                res++;
            }
            continue;
        }
        int p=-b[i],q=a[i];
        int g=gcd(abs(p),abs(q));
        p/=g;
        q/=g;
        if(q<0){
            p=-p;
            q=-q;
        }
        freq[{p,q}]++;
    }
    int Max=0;
    for(auto &f:freq){
        Max=max(Max,f.second);
    }
    res+=Max;
    cout<<res<<endl;
    return 0;
}