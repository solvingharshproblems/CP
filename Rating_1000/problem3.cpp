#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,p;
    cin>>n>>p;
    vector<int> a(n),b(n);
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        v[i]={b[i],a[i]};
    }
    sort(v.begin(),v.end());
    long long res=p,count=1;
    for(auto it:v){
        int u=it.first;
        int v=it.second;
        if(u>=p){
            break;
        }
        if(count+v>n){
            res+=1LL*(n-count)*u;
            count=n;
            break;
        }
        else{
            res+=1LL*u*v;
            count+=v;
        }
    }
    res+=(n-count)*p;
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}