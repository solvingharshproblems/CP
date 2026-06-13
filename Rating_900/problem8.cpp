#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=1,res=1;
    for(int i=0;i<n-1;i++){
        if((s[i]=='<' && s[i+1]=='<') || (s[i]=='>' && s[i+1]=='>')){
            count++;
        }
        else{
            count=1;
        }
        res=max(res,count);
    }
    cout<<res+1<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}