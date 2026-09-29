#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long s=0,res=0;
    for(long long &x:a){
        s+=x;
        res=max(res,x);
    }
    if(res>s-res || (s&1)){
        cout<<"T"<<endl;
    }
    else{
        cout<<"HL"<<endl;
    }
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