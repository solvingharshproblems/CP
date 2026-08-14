#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    long long k;
    cin>>n>>k;
    vector<int> a(n),bits(31,0);
    int res=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            res=a[i];
        }
        else{
            res&=a[i];
        }
        for(int j=0;j<=30;j++){
            if(a[i] & (1LL<<j)){
                bits[j]++;
            }
        }
    }
    for(int i=30;i>=0;i--){
        long long needed=n-bits[i];
        if(k>=needed){
            res|=(1LL<<i);
            k-=needed;
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