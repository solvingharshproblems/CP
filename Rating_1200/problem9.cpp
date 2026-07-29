#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    map<long long,int> freq;
    for(auto x:a){
        freq[x]++;
    } 
    map<long long,int> cnt;
    int res=0;
    long long prev=-1;
    for(auto &[x,i]:freq){
        if(prev!=-1 && x!=prev+1){
            cnt.clear();
        }
        int extend=0;
        if(cnt.count(x-1)){
            extend=min(cnt[x-1],i);
        }
        int newSets=i-extend;
        res+=newSets;
        cnt.erase(x-1);
        cnt[x]=extend+newSets;
        prev=x;
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