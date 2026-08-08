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
    vector<long long> arr(31,0);
    for(int i=0;i<n;i++){
        for(int j=30;j>=0;j--){
            if((a[i] & (1 <<j))){
                arr[j]++;
                break;
            }
        }
    }
    long long res=0;
    for(int i=0;i<31;i++){
        res+=(arr[i]*(arr[i]-1))/2;
    }
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}