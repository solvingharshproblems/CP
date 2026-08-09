#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n,0);
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]%y].push_back(a[i]);
    }
    long long int res=0;
    for(auto &it:mp){
        vector<int> v=it.second;
        map<int,long long int> mp1;
        for(int i=0;i<(int)v.size();i++){
            mp1[v[i]%x]++;
        }
        for(auto &p:mp1){
            if(p.first==0 || (p.first==x/2 && x%2==0)){
                long long int count=p.second;
                res+=(count*(count-1))/2;
                p.second=0;
            } 
            else{
                long long int count1=p.second;
                long long int count2=mp1[x-p.first];
                res+=count1*count2;
                mp1[x-p.first]=0;
            }
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