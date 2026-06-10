#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> a(26,0);
    for(int i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    int res=0;
    for(int i=0;i<26;i++){
        res+=a[i]%2;
    }
    if(res>k+1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}