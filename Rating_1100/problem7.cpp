#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool check(ll mid,vector<ll>& heights,ll x){
    ll units=0;
    int n=(int)heights.size();
    for(int i=0;i<n;i++){
        if(heights[i]<mid){
            units+=mid-heights[i];
        }
    }
    return units<=x;
}
void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll> heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    ll y=1,z=1e12,res=-1;
    while(y<=z){
        ll mid=y+(z-y)/2;
        if(check(mid,heights,x)){
            res=mid;
            y=mid+1;
        } 
        else{
            z=mid-1;
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