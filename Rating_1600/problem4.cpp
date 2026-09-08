#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int n, k;
vector<int> a;
bool check(int x){
    for(int i=0;i<n;i++){
        long long cost=0;
        for(int j=i,y=x;j<n;j++,y--){
            if(y<=a[j]) {
                break;
            }
            if(j==n-1){
                cost+=(int)1e9;
            } 
            else{
                cost+=y-a[j];
            }
        }
        if(cost<=k){
            return true;
        }
    }
    return false;
}
void solve(){
    cin>>n>>k;
    a.resize(n);
    for(auto &x:a){
        cin>>x;
    }
    int l=*max_element(a.begin(),a.end());
    int r=l+n;
    int res=l;
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