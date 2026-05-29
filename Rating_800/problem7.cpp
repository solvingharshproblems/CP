#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
bool check(string s,string x){
    if(x.size()<s.size()){
        return false;
    }
    for(int i=0;i<x.size()-s.size()+1;i++){
        if(x.substr(i,s.size())==s){
            return true;
        }
    }
    return false;
}
void solve(){
    int n,m;
    cin>>n>>m;
    string x,s;
    n=x.length();
    m=s.length();
    cin>>x;
    cin>>s;
    string x0=x;
    string x1=x0+x0;
    string x2=x1+x1;
    string x3=x2+x2;
    string x4=x3+x3;
    string x5=x4+x4;
    int res=-1;
    if(check(s,x0)){
        res=0;
    }
    else if(check(s,x1)){
        res=1;
    }
    else if(check(s,x2)){
        res=2;
    }
    else if(check(s,x3)){
        res=3;
    }
    else if(check(s,x4)){
        res=4;
    }
    else if(check(s,x5)){
        res=5;
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