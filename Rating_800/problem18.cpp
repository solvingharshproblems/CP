#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int x,k;
    cin>>x>>k;
    if(x%k==0){
        cout<<2<<endl;
        cout<<1<<" "<<x-1<<endl;
    }
    else{
        cout<<1<<endl;
        cout<<x<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}