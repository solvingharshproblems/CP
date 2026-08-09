#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> arr(n,-1);
    int prev=-1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            prev=i-1;
        }
        arr[i]=prev;
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(arr[r-1]>=l-1){
            cout<<r<<" "<<arr[r-1]+1<<endl;
        } 
        else{
            cout<<-1<<" "<<-1<<endl;
        }
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