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
    vector<int> pos(n,0);
    iota(pos.begin(),pos.end(),0);
    vector<pair<int,int>> res;
    for(int i=n-1;i;i--){
        vector<int> occ(i,-1);
        for(auto j:pos){
            int r=a[j]%i;
            if(occ[r]!=-1){
                res.push_back({j,occ[r]});
                pos.erase(find(pos.begin(),pos.end(),j));
                break;
            }
            occ[r]=j;
        }
    }
    reverse(res.begin(),res.end());
    cout<<"YES"<<endl;
    for(auto [x,y]:res){
        cout<<x+1<<' '<<y+1<<endl;
    }
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}