#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,x,m;
    cin>>n>>x>>m;
    int p1=x,p2=x;
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        if(r>=p1 && l<=p2){
            p1=min(p1,l);
            p2=max(p2,r);
        }
    }
    cout<<p2-p1+1<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}