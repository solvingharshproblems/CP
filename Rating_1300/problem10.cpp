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
    long long res=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(a[i]>=i+1){
            continue;
        }
        res+=(long long)(lower_bound(v.begin(),v.end(),a[i])-v.begin());
        v.push_back(i+1);
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