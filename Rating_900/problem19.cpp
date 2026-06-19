#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long x,n;
    cin>>x>>n;
    long long res;
    if(n%4==1){
        res=-n;
    }
    else if(n%4==2){
        res=1;
    }
    else if(n%4==3){
        res=n+1;
    }
    else if(n%4==0){
        res=0;
    }
    if(x%2==0){
        res=x+res;
    }
    else{
        res=x-res;
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