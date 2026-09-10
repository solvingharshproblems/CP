#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    vector<int> arr(26,-1);
    vector<char> u;
    for(char c:a){
        if(arr[c-'a']==-1){
            arr[c-'a']=(int)u.size();
            u.push_back(c);
        }
    }
    long long res=0;
    int uc=(int)u.size();
    int bc=min(k,uc);
    for(int i=0;i<(1<<uc);i++){
        if(__builtin_popcount((unsigned)i)!=bc){
            continue;
        }
        long long count=0,match=0;
        for(int j=0;j<n;j++){
            if(a[j]==b[j] || (i&(1<<arr[a[j]-'a']))){
                ++match;
            } 
            else{
                count+=match*(match+1)/2;
                match=0;
            }
        }
        count+=match*(match+1)/2;
        res=max(res,count);
    }
    cout<<res<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}