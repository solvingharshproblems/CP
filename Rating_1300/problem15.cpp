#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        vector<int> v;
        int m;
        cin>>m;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            v.push_back(x-j+1);
        }
        sort(v.begin(),v.end());
        a.push_back({v[m-1],m});
    }
    sort(a.begin(),a.end());
    int ans=a[0].first;
    int increase=a[0].second;
    for(int i=1;i<n;i++){
        ans=max(ans,a[i].first-increase);
        increase+=a[i].second;
    }
    cout<<ans<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}