#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long a,b;
    cin>>a>>b;
    long long ra=a,rb=b;
    while(ra%2==0){
        ra/=2;
    }
    while(rb%2==0){
        rb/=2;
    }
    if(ra!=rb){
        cout<<-1<<endl;
    } 
    else{
        a/=ra;
        b/=rb;
        a=log2(a);
        b=log2(b);
        long long res=ceil(abs(a-b)/3.0);
        cout<<res<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}