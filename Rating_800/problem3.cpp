#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res=0;
    for(int i=0;i<=n-3;i++){
        if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
            cout<<2<<endl;
            return;
        }
    }
    for(char ch:s){
        if(ch=='.'){
            res++;
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