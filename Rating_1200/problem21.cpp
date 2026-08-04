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
    vector<int> pos(2*n+1,-1);   
    for(int i=0;i<n;i++){
        pos[a[i]]=i+1;
    }
    int res=0;
    for(int i=1;i<=2*n;i++){
        if(pos[i]==-1){
            continue;
        }
        for(int j=i+1;j<=2*n/i;j++){
            if(pos[j]==-1){
                continue;
            }
            if(pos[i]+pos[j]==i*j){
                res++;
            }
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