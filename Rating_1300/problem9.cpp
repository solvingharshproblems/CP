#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vector<int> a(x);
        for(int j=0;j<x;j++){
            cin>>a[j];
            mp[a[j]]++;
        }
        v.push_back(a);
    }
    string res="No";
    for(int i=0;i<n;i++){
        int f=1;
        for(auto it:v[i]){
            if(mp[it]==1){
                f=0;
                break;
            }
        }
        if(f==1){
            res="Yes";
            break;
        }
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