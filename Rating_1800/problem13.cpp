#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=(int)s.size();
    int opens=n/2;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            opens--;
        }
    }
    int last=-1,first=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='?' && opens>0){
            last=i;
            s[i]='(';
            opens--;
        } 
        else if(s[i]=='?'){
            s[i]=')';
            first=(first!=-1)?first:i;
        }
    }
    if(last==-1 || first==-1){
        cout<<"YES"<<endl;
        return;
    }
    swap(s[last],s[first]);
    int balance=0;
    for(int i=0;i<n;i++){
        balance+=(s[i]=='(')?1:-1;
        if(balance<0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}