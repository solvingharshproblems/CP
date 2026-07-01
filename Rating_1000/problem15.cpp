#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<k;i++){
        if(s[i]=='W'){
            count++;
        }
    }
    int res=count;
    for(int i=k;i<n;i++){
        if(s[i-k]=='W'){
            count--;
        }
        if(s[i]=='W'){
            count++;
        }
        res=min(res,count);
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