#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    long long res=1;
    for(int i=0;i<k;i++){
        res=(res*n)%MOD;
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