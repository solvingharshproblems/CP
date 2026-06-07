#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int r=n-1,l=0;
    while(l<r && s[l]!=s[r]){
        r--;
        l++;
    }
    cout<<r-l+1<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}