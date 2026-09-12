#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string res(k,'z');
    for(int i=1;i<=n;i++){
        string t=s.substr(0,i);
        while((int)t.size()<k){
            t=t+t;
        }
        t=t.substr(0,k);
        res=min(res,t);
    }
    cout<<res<<endl;
    return 0;
}