#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    string s;
    cin>>s;
    int n=(int)s.size();
    set<char> c;
    int k;
    for(k=0;k<n;k++){
        if(c.find(s[k])==c.end()) {
            c.insert(s[k]);
        } 
        else{
            break;
        }
    }
    for(int i=k;i<n;i++){
        if(s[i]!=s[i-k]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}