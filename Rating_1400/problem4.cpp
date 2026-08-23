#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(k>=3){
        cout<<0<<endl;
        return;
    }
    vector<long long> arr;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            arr.push_back(abs(a[i]-a[j]));
        }
    }
    sort(arr.begin(),arr.end());
    long long res=LLONG_MAX;
    for(int i=0;i<n;i++){
        res=min(res,a[i]);
    }
    res=min(res,arr[0]);
    if(k==2){
        for(int i=0;i<n;i++){
            auto it=lower_bound(arr.begin(),arr.end(),a[i]);
            if(it!=arr.end()){
                res=min(res,abs(*it-a[i]));
            }
            if(it!=arr.begin()){
                --it;
                res=min(res,abs(*it-a[i]));
            }
        }
    }
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}