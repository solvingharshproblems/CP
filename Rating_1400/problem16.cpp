#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> arr;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            arr.push_back(i);
        }
    }
    int index=(arr.size()-1)/2;
    long long res=0;
    for(int i=0;i<arr.size();i++){
        res+=abs(arr[i]-(arr[index]-index+i));
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