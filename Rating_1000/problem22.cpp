#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long a,b;
    cin>>a>>b;
    long long res=INT_MAX;
    for(int i=0;i<32;i++){
        long long operations=i;
        long long newB=b+i;
        if(newB==1){
            continue;
        }
        long long copyA=a;
        while(copyA>0){
            copyA/=newB;
            operations++;
        }
        res=min(res,operations);
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