#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    string s;
    cin>>s;
    int n=s.length();
    int count1=0,count0=0,lengthT=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='0' && count1>0){
            count1--;
            lengthT++;
        }
        else if(s[i]=='1' && count0>0){
            count0--;
            lengthT++;
        }
        else{
            break;
        }
    }
    cout<<n-lengthT<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}