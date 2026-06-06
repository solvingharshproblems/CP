#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d){
        cout<<-1<<endl;
        return;
    }
    long long res=d-b;
    a+=res;
    if(a<c){
        cout<<-1<<endl;
        return;
    }
    res+=(a-c);
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}