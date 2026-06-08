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
    int prefix=0,suffix=0;
    int k=0,res=-1;
    for(int i=0;i<n;i++){
        if(a[i]==2){
            suffix++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==2){
            prefix++;
        }
        if(prefix==(suffix-prefix)){
            res=i+1;
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