#include <bits/stdc++.h>
using namespace std;
const long long inf=1e15;
int n,maxH;
long long x;
vector<long long> c,h;
vector<vector<long long>> dp;
long long month(int i,int H){
    if(i<0){
        return (H==0)?0:-inf;
    }
    if(dp[i][H]!=-1){
        return dp[i][H];
    }
    long long money1=month(i-1,H)+x;
    long long money2=-inf;
    if(H>=h[i]){
        long long prev=month(i-1,H-h[i]);
        if(prev>=c[i]){
            money2=prev-c[i]+x;
        }
    }
    return dp[i][H]=max(money1,money2);
}
void solve(){
    cin>>n>>x;
    c.assign(n,0);
    h.assign(n,0);
    for(int i=0;i<n;i++){
        cin>>c[i]>>h[i];
    }
    maxH=accumulate(h.begin(),h.end(),0LL);
    dp.assign(n,vector<long long>(maxH+1,-1));
    for(int H=maxH;H>=0;H--){
        long long saved=month(n-1,H);
        if(saved>=0){
            cout<<H<<endl;
            break;
        }
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}