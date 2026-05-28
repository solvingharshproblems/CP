#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool changed=true;
    while(changed){
        changed=false;
        for(int i=1;i<=n-2;i++){
            if((arr[i-1]<arr[i]) && (arr[i]>arr[i+1])){
                swap(arr[i],arr[i+1]);
                changed=true;
            }   
        }
    }
    
    if(is_sorted(arr.begin(),arr.end())){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}