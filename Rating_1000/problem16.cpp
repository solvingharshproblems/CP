#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,r,b;
    cin>>n>>r>>b;
    string res;
    int len=r/(b+1);
    int extra=r%(b+1);
    for(int i=1;i<=b+1;i++){
        for(int j=0;j<len;j++){
            res+='R';
        }
        if(extra>0){
            res+='R';
            extra--;
        }
        if(i!=b+1){
            res+='B';
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