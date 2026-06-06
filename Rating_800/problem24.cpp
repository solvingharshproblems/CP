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
    for(int i=0;i<n;i++){
        res^=a[i];
    }
    if(n%2==1){
        cout<<res<<endl;
    }
    else{
        if(res==0){
            cout<<res<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}