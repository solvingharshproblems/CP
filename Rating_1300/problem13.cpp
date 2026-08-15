#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long calculate(int x){
    return x*1LL*(x+1)/2;
}
void solve(){
    long long k,x;
    cin>>k>>x;
    long long low=0,high=2*k-1,res=2*k-1;
    while(low<=high){
        long long mid=(low+high)/2;
        long long count;
        if(mid>=k){
            count=calculate(k)+calculate(k-1)-calculate(2*k-1-mid);
        }
        else{
            count=calculate(mid);
        }
        if(count>=x){
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
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