#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int x=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x^=a[i];
    }
    if(x==0){
        cout<<"YES"<<endl;
        return;
    }
    int pr=0,pr_ind=-1;
    for(int i=0;i<n;i++){
        pr^=a[i];
        if(pr==x){
            pr_ind=i;
            break;
        }
    }
    int suf=0,suf_ind=-1;
    for(int i=n-1;i>=0;i--){
        suf^=a[i];
        if(suf==x){
            suf_ind=i;
            break;
        }
    }
    if(suf_ind>pr_ind){
        cout<<"YES"<<endl;
    } 
    else{
        cout<<"NO"<<endl;
    }
}
int32_t main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
