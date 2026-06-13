#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int res=1,count=1;
    for(int i=0;i<n;i++){
        if(abs(a[i]-a[i-1])<=k){
            count++;
        }
        else{
            count=1;
        }
        res=max(res,count);
    }
    cout<<abs(n-res)<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}