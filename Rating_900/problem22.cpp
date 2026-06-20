#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long count1=0,count0=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count0++;
        }
        else if(a[i]==1){
            count1++;
        }
    }
    long long res=pow(2,count0)*count1;
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}