#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(auto &x:a){
        cin>>x;
    }
    sort(a.begin(),a.end());
    vector<long long> pref(n);
    pref[0]=a[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+a[i];
    }
    long long res=0;
    for(int i=0;i<=k;i++){
        int removeLargest=k-i;
        int left=2*i;
        int right=n-removeLargest-1;
        long long sum=pref[right]-(left==0?0:pref[left-1]);
        res= max(res,sum);
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