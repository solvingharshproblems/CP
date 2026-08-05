#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count++;
        }
    }
    if((count%2==0) || (count==1)){
        cout<<"BOB"<<endl;
    } 
    else{
        cout<<"ALICE"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}