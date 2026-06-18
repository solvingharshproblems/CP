#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    bool res=false;
    int newA=2*b-c;
    if(newA/a>0 && newA%a==0){
        res=true;
    }
    int newB=(a+c)/2;
    if(newB/b>0 && newB%b==0 && (c-a)%2==0){
        res=true;
    }
    int newC=2*b-a;
    if(newC/c>0 && newC%c==0){
        res=true;
    }
    if(res){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}