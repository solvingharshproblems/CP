#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n),res;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    res.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            res.push_back(arr[i]);
        }
        else{
            res.push_back(arr[i]);
            res.push_back(arr[i]);
        }
    }
    cout<<res.size()<<endl;
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