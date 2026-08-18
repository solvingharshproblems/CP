#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    int f=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int k=n/i;
            cout<<k<<" "<<n-k<<endl;
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<1<<" "<<n-1<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}