#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int n;
vector<pair<int,int>> v;
bool check(int x){
    int c=0;
    for(int i=0;i<n;i++){
        if(v[i].second>=c && v[i].first>=x-c-1){
            c++;
        }
    }
    return c>=x;
}
void solve(){
    cin>>n;
    v.resize(n);
    for(auto &p:v){
        cin>>p.first>>p.second;
    }
    int l=1,r=n,res=1;
    while(l<=r){
        int mid=(l+r)/2;
        if(check(mid)){
            res=mid;
            l=mid+1;
        } 
        else{
            r=mid-1;
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