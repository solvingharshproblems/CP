#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int GCD(int a,int b){
    if(b==0) return a;
    return GCD(b,a%b);
}
void solve(){
    long long a,b;
    cin>>a>>b;
    if(b>a){
        swap(a,b);
    }
    if(a==b){
        cout<<0<<" "<<0<<endl;
    }
    else{
        long long gcd=a-b;
        long long moves=min(b%gcd,gcd-b%gcd);
        cout<<gcd<<" "<<moves<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}