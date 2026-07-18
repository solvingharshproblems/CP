#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    long long sum=0;
    int negs=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            ++negs;
            a[i]=-a[i];
        }
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    if(negs&1){
        sum-=2LL*a[0];
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