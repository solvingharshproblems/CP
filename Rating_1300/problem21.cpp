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
    vector<int> res;
    res.push_back(a[0]);
    for(int i=1;i<n-1;i++){
        if((1LL*a[i]-a[i-1])*(1LL*a[i+1]-a[i])<0){
            res.push_back(a[i]);
        }
    }
    res.push_back(a[n-1]);
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}