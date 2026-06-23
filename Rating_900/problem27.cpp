#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,x;
    cin>>n>>x;
    vector<long long> a(n);
    for(int i=0;i<n;i++){ 
        cin>>a[i];
    }
    long long min=0,max=0;
    for(int i=0;i<n;i++){
        min+=a[i];
        max+=ceil(a[i]*1.0/x);
    }
    min=ceil(min*1.0/x);
    cout<<min<<" "<<max<<"\n";
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}