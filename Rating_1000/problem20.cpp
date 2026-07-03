#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int XOR(int n){
    int a=n%4;
    if(a==0){
        return n;
    }
    else if(a==1){
        return 1;
    }
    else if(a==2){
        return n+1;
    }
    else{
        return 0;
    }
}
void solve(){
    int a,b;
    cin>>a>>b;
    int x=XOR(a-1);
    if(x==b){
        cout<<a<<endl;
    }
    else if((x^b)!=a){
        cout<<a+1<<endl;
    }
    else{
        cout<<a+2<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}