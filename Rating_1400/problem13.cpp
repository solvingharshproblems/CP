#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=0,count=0;
    int l=0,r=0;
    while(r<k){
        if(a[r]<2*a[r+1]){
            count++;
        }
        r++;
    }
    while(r<n-1){
        if(count==k){
            res++;
        }
        if(a[l]<2*a[l+1]){
            count--;
        }
        if(a[r]<2*a[r+1]){
            count++;
        }
        l++;
        r++;
    }
    if(count==k){
        res++;
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