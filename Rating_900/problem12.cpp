#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=a[n-1]-a[0];
    for(int i=0;i<n;i++){
        res=max(res,a[i]-a[0]);
    }
    for(int i=0;i<n-1;i++){
        res=max(res,a[n-1]-a[i]);
    }
    for(int i=0;i<n-1;i++){
        res=max(res,a[i]-a[i+1]);
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