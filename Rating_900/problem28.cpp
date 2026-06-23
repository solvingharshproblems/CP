#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long> v(n*k);
    for(int i=0;i<n*k;i++){
        cin>>v[i];
    }
    long long pointer=n*k,sum=0;
    while(k--){
        pointer-=(n/2+1);
        sum+=v[pointer];
    }
    cout<<sum<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}