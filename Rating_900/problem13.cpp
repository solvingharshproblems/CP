#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count++;
        }
    }
    bool found=false;
    int l=0,r=n-1;
    while(a[l]==0){
        l++;
    }
    while(a[r]==0){
        r--;
    }
    for(int i=l;i<=r;i++){
        if(a[i]==0){
            found=true;
        }
    }
    if(count==n){
        cout<<0<<endl;
    }
    else if(found==false){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}