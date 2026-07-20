#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin>>n;
    long long l,r;
    cin>>l>>r;
    vector<long long> res;
    for(long long i=1;i<=n;i++){
        long long temp=((l+i-1)/i)*i;
        res.push_back(temp);
        if(temp>r){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}