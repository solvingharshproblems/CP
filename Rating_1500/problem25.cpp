#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int count=0,p=1;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]=='a'){
            count++;
        } 
        else if(s[i]=='b'){
            p=p*(count+1)%MOD;
            count=0;
        }
    }
    p=p*(count+1)%MOD;
    int res=(p-1+MOD)%MOD;
    cout<<res<<endl;
    return 0;
}