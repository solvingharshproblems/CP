#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
vector<int> pairs[1001];
int __gcd(int a,int b){
    if(b==0){ 
        return a;
    }
    return __gcd(b,a%b);
}
void precompute(){
    for(int i=1;i<=1000;i++){
        for(int j=i+1;j<=1000;j++){
            if(__gcd(i,j)==1){
                pairs[i].push_back(j);
                pairs[j].push_back(i);
            }
        }
    }
}
void solve(){
    int n;
    cin>>n;
    vector<int> idx(1001,0);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        idx[x]=i;
    }
    int res=-1;
    for(int i=1;i<=1000;i++){
        if(idx[i]==0){
            continue;
        }
        for(int j:pairs[i]){
            if(idx[j]!=0){
                res=max(res,idx[i]+idx[j]);
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
    precompute();
    while(t--) solve();
}