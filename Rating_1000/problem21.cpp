#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    string A,B;
    cin>>A>>B;
    long long n=A.size(),m=B.size();
    long long lcs=0;
    for(long long len=1;len<=min(n,m);len++){
        for(long long i=0;i+len<=n;i++){
            for(long long j=0;j+len<=m;j++){
                string extractA=A.substr(i,len);
                string extractB=B.substr(j,len);
                if(extractA==extractB){
                    lcs=max(lcs,len);
                }
            }
        }
    }
    long long res=n+m-2*lcs;
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}