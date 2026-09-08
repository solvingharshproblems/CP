#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    string s;
    cin>>s;
    long long n=(long long)s.size();
    long long pos;
    cin>>pos;
    string res;
    res.reserve(s.size());
    for(char c:s){
        while(!res.empty() && res.back()>c && pos>n){
            res.pop_back();
            pos-=n;
            --n;
        }
        res.push_back(c);
    }
    while(pos>n){
        res.pop_back();
        pos-=n;
        --n;
    }
    cout<<res[(size_t)pos-1];
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