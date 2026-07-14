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
    sort(a.begin(),a.end());
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b.rbegin(),b.rend());
    long long res=1;
    for(int i=0;i<n;i++){
        long long temp=upper_bound(a.begin(),a.end(),b[i])-a.begin();
        long long count=a.size()-temp;
        res=res*max(count-i,0LL)%MOD;
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