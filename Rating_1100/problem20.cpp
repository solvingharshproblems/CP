#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int __gcd(int a,int b){
    if(b==0){ 
        return a;
    }
    return __gcd(b,a%b);
}
void solve(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long res=0,sum=0;
    long long total=accumulate(v.begin(),v.end(),0LL);
    for(int i=0;i<n-1;i++){
        sum+=v[i];
        int x=__gcd(total-sum,sum);
        res=max(res,(long long)x);
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