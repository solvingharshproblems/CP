#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();
    vector<int> freq(26,0);
    for(int i=0;i<m;i++){
        freq[t[i]-'A']++;
    }
    for(int i=n-1;i>=0;i--){
        if(freq[s[i]-'A']>0){
            freq[s[i]-'A']--;
        }
        else{
            s[i]='.';
        }
    }
    string res="";
    for(int i=0;i<n;i++){
        if(s[i]!='.'){
            res+=s[i];
        }
    }
    if(res==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}