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
    map<int,int> mp;
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=a[i];j++){
            while(a[i]%j==0){
                mp[j]++;
                a[i]/=j;
            }
        }
        if(a[i]>1){
            mp[a[i]]++;
        }
    }
    int flag=1;
    for(auto it:mp){
        if(it.second%n!=0){
            flag=0;
            break;
        }
    }
    if(flag){
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