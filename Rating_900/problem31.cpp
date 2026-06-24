#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int res=0;
    while(n>1){
        if(n%6==0){
            n/=6;
            res++;
        }
        else if(n%3==0){
            n*=2;
            res++;
        }
        else{
            cout<<-1<<endl;
            return;
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