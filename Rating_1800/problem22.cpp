#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n), pos(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        --a[i];
        pos[a[i]]=i;
    }
    set<int> s;
    vector<int> b(k);
    for(int i=0;i<k;i++){
        cin>>b[i];
        --b[i];
        s.insert(b[i]);
    }
    long long res=1;
    for(int val:b){
        int p=pos[val];
        int blocked=0,neighbors=0;
        if(p>0){
            blocked+=(s.find(a[p-1])!=s.end());
            ++neighbors;
        }
        if(p+1<n){
            blocked+=(s.find(a[p+1])!=s.end());
            ++neighbors;
        }
        res=(res*(neighbors-blocked))%MOD;
        s.erase(val);
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