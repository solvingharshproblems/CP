#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(void){
    long long n,k,x;
    cin>>n>>k>>x;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<long long> arr;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]>x){
            arr.push_back(a[i+1]-a[i]);
        }
    }
    sort(arr.begin(),arr.end());
    int ans=arr.size()+1;
    for(auto it:arr){
        long long value=(it/x)+(it%x!=0)-1;
        if(k>=value){
            ans--;
            k-=value;
        }
    }
    cout<<ans<<endl;
}