#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    long long res=0;
    vector<bool> a(n+1,false);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            if(s[j-1]=='1'){
                break;
            }
            if(a[j]){
                continue;
            }
            else{
                a[j]=true;
                res+=i;
            }
        }
    }
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}