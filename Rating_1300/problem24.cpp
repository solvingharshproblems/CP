#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    long long Max=0,curr=0;
    for(int i=0;i<n-1;i++){
        curr+=a[i];
        if(curr<0){
            curr=0;
        }
        Max=max(Max,curr);
    }
    curr=0;
    for(int i=1;i<n;i++){
        curr+=a[i];
        if(curr<0){
            curr=0;
        }
        Max=max(Max,curr);
    }
    if(Max>=sum){
        cout<<"NO"<<endl;
    } 
    else{
        cout<<"YES"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}