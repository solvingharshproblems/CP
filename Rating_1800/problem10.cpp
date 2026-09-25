#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
        p[i]--;
    }
    int ind=1;
    int res=n;
    vector<int> comp(n,0);
    for(int i=0;i<n;i++){
        if(comp[i]){
            continue;
        }
        int v=i;
        while(comp[v]==0){
            comp[v]=ind;
            v=p[v];
        }
        ind++;
        res--;
    }
    for(int i=0;i<n-1;i++){
        if(comp[i]==comp[i+1]){
            cout<<res-1<<endl;
            return;
        }
    }
    cout<<res+1<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}