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
    for(int i=n-2;i>=0;i--){
        while(a[i]>=a[i+1]){
            res++;
            a[i]/=2;
            if(a[i]==0){
                break;
            }
        }
        if(a[i]==0 && a[i+1]==0){
            res=-1;
            break;
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