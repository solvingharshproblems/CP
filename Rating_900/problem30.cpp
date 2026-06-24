#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    string s;
    cin>>s;
    int count0=0,count1=0,res=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            count0++;
        }
        else if(s[i]=='1'){
            count1++;
        }
        res=min(count0,count1);
    }
    if(res%2==0){
        cout<<"NET"<<endl;
    }
    else{
        cout<<"DA"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}