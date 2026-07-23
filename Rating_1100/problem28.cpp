#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=0;
    int i=n-1;
    while(i>=0 && a[i]==a[n-1]){
        i--;
    }
    if(i==-1){
        cout<<0<<endl;
        return;
    }
    while(i>=0){
        i-=(n-1-i);
        res++;
        while(i>=0 && a[i]==a[n-1]){
            i--;
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