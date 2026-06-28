#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    s+=s;
    n*=2;
    int res=INT_MIN,index=-1;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='g'){
            index=i;
        }
        if(s[i]==c){
            res=max(res,index-i);
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