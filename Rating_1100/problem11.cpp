#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long> v(n);
    for(auto &it:v){
        cin>>it;
    }
    sort(v.begin(),v.end());
    vector<long long> arr(n);
    arr[0]=v[0];
    for(int i=1;i<n;i++){
        arr[i]=v[i]+arr[i-1];
    }
    long long res=0;
    for(int i=0;i<=k;i++){
        int second=k-i;
        int left=2*i;
        int right=n-second-1;
        long long sum=arr[right]-(left==0?:arr[left-1]);
        res=max(res,sum);
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