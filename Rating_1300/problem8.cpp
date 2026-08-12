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
    vector<int> res;
    for(int i=0;i<n;i++){
        int l=1,r=i+1;
        while(l<=r){
            int m=(l+r)/2;
            if(a[i-m+1]>=m){
                l=m+1;
            } 
            else{
                r=m-1;
            }
        }
        res.push_back(r);
    }
    for(auto i:res){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}