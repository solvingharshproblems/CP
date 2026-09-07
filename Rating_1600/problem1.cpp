#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
vector<int> divisors(int n){
    vector<int> div;
    for(int i=1;i*i<=n;i++){
        if(n%i){
            continue;
        }
        div.push_back(i);
        if(n/i!=i){
            div.push_back(n/i);
        }
    }
    return div;
}
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a){
        cin>>x;
    }
    auto div=divisors(n);
    int res=0;
    for(auto &k:div){
        int m=0;
        for(int i=k;i<n;i++){
            m=gcd(m,abs(a[i]-a[i-k]));
        }
        if(m!=1){
            res++;
        }
    }
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