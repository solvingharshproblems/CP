#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
#define ll long long
void solve(){
    ll n,c;
    cin>>n>>c;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll l=1,r=1e9,res=-1;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=(a[i]+2*mid)*(a[i]+2*mid);
            if(sum>c){
                break;
            }
        }
        if(sum<=c){
            res=mid;
            l=mid+1;
        } 
        else{
            r=mid-1;
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