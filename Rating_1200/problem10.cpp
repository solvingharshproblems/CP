#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long> k(q);
    for(int i=0;i<q;i++){
        cin>>k[i];
    }
    for(int i=0;i<q;i++){
        long long res=0;
        for(int j=0;j<n;j++){
            if(k[i]>=a[j]){
                res+=a[j];
            }
            else{
                break;
            }
        }
        cout<<res<<" ";
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