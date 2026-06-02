#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
bool isOdd(int n){
    if(n%2!=0){
        return true;
    }
    return false;
}
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int odd=0;
    for(int i=0;i<n;i++){
        if(isOdd(arr[i])){
            odd++;
        }
    }
    if(odd%2==0){
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