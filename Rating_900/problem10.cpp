#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,q;
    cin>>n>>q;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long> pref(n+1,0);
    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+a[i];
    }
    long long sum=pref[n];
    while(q--){
        long long l,r,k;
        cin>>l>>r>>k;
        long long segment=pref[r]-pref[l-1];
        long long len=r-l+1;
        long long total=sum-segment+len*k;
        if(total%2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}