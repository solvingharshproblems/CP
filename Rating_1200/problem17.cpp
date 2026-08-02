#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
bool check(long long value,int i,int x,int mid){
    if(value+(1LL*(i+1)*(mid-1))<=x){
        return true;
    }
    return false;
}
int binarySearch(long long value,int i,int x){
    int low=1,high=1e9+5;
    int res=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(value,i,x,mid)){
            res=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return res;
}
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<long long> preSum(n);
    preSum[0]=a[0];
    for(int i=1;i<n;i++){
        preSum[i]=preSum[i-1]+a[i];
    }
    long long res=0;
    for(int i=0;i<n;i++){
        res+=binarySearch(preSum[i],i,x);
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