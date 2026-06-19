#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    string s;
    cin>>s;
    if(s.front()!=s.back()){
        s.front()=s.back();
    }
    cout<<s<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}