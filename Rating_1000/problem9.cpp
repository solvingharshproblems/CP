#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin>>n;
    long long res1=1,res2=n-1;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            res1=n/i;
            res2=n-res1;
            break;
        }
    }
    cout<<res1<<" "<<res2<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}