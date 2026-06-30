#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,x;
    cin>>n>>x;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<long long,long long>> arr(n);
    for(int i=0;i<n;i++){
        arr[i]={a[i]-x,a[i]+x};
    }
    long long res=0;
    long long l=arr[0].first,r=arr[0].second;
    for(int i=1;i<n;i++){
        l=max(l,arr[i].first);
        r=min(r,arr[i].second);
        if(l>r){
            res++;
            l=arr[i].first;
            r=arr[i].second;
        }
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