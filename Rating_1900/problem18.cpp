#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<long long> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    long long beauty=0;
    for(int i=0;i<n;i++){
        beauty+=abs(a[i]-b[i]);
    }
    int x=0,y=0;
    for(int i=1;i<n;i++){
        if(max(a[i],b[i])<max(a[x],b[x])){
            x=i;
        }
        if(min(a[i],b[i])>min(a[y],b[y])){
            y=i;
        }
    }
    long long res=beauty;
    if(x!=y){
        long long cur=beauty;
        cur-=abs(a[x]-b[x]);
        cur-=abs(a[y]-b[y]);
        cur+=abs(a[x]-b[y]);
        cur+=abs(a[y]-b[x]);
        res=max(res,cur);
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