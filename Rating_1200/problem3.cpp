#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long GCD(long long a,long long b){
    while(b){
        long long t=a%b;
        a=b;
        b=t;
    }
    return a;
}
long long LCM(long long a,long long b){
    return (a/GCD(a,b))*b;
}
void solve(){
    long long n,x,y;
    cin>>n>>x>>y;
    long long both=n/LCM(x,y);
    long long positive=n/x-both;
    long long negative=n/y-both;
    long long sumLargest=(2*n-positive+1)*positive/2;
    long long sumSmallest=negative*(negative+1)/2;
    long long res=sumLargest-sumSmallest;
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}