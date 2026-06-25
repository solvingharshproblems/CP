#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=INT_MAX,count=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            count++;
        }
        if(a[i]%k==0){
            res=0;
        }
        res=min(res,k-a[i]%k);
    }
    if(k==4){
        if(count>=2){
            res=min(res,0);
        }
        else if(count==1){
            res=min(res,1);
        }
        else if(count==0){
            res=min(res,2);
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