#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    const int MAXV=200;
    vector<vector<int>> pos(MAXV+1);
    for(int i=1;i<=n;i++){
        pos[a[i]].push_back(i);
    }
    vector<vector<int>> pref(MAXV+1,vector<int>(n+1,0));
    for(int i=1;i<=MAXV;i++){
        for(int j=1;j<=n;j++){
            pref[i][j]=pref[i][j-1]+(a[j]==i);
        }
    }
    int res=1;
    for(int i=1;i<=MAXV;i++){
        res=max(res,pref[i][n]);
    }
    for(int i=1;i<=MAXV;i++){
        int count=(int)pos[i].size();
        for(int j=1;j*2<=count;j++){
            int L=pos[i][j-1]+1;
            int R=pos[i][count-j]-1;
            if(L>R){
                continue;
            }
            int mid=0;
            for(int k=1;k<=MAXV;k++){
                int curr=pref[k][R]-pref[k][L-1];
                if(curr>mid){
                    mid=curr;
                }
            }
            res=max(res,2*j+mid);
        }
    }
    cout<<res<<endl;
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