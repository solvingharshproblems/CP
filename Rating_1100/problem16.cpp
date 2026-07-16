#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(v[0]!=1){
        cout<<"No"<<endl;
        return;
    }
    long long sum=1;
    for(long long i=1;i<n;i++){
        if(v[i]>sum){
            cout<<"No"<<endl;
            return;
        }
        sum+=v[i];
    }
    cout<<"Yes"<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}