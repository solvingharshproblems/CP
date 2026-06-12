#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long GCD(long long a,long long b){
    if(b==0) return a;
    return GCD(b,a%b);
}
long long LCM(long long a,long long b){
    return (a/GCD(a,b))*b;
}
void solve(){
    long long n;
    cin>>n;
    long long lcm=1;
    int res=0;
    for(long long i=1;;i++){
        long long g=GCD(lcm,i);
        if(lcm>n/(i/g)){
            break;
        }
        lcm=lcm/g*i;
        if(n%lcm==0){
            res=i;
        }
        else{
            break;
        }
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