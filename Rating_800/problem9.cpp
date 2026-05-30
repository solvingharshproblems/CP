#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int res=0;
    for(int i=0;i<n-1;i++){
        res+=arr[i];
    }
    cout<<-1*res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}