#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(c%2==1){
        if(b>a){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
    else{
        if(a>b){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}