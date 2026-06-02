#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long res=LLONG_MAX;
    if(!is_sorted(a.begin(),a.end())){
        cout<<0<<endl;
        return;
    }    
    for(int i=0;i<n-1;i++){
        res=min(res,a[i+1]-a[i]);
    }
    cout<<res/2+1<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}