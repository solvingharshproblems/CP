#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF=9e18;
long long dp(int i,int j,const vector<int>& t,vector<vector<long long>>& memo){
    if(j==0){
        return 0;
    }
    if(i==0){
        return INF;
    }
    long long& res=memo[i][j];
    if(res!=-1){
        return res;
    }
    res=dp(i-1,j,t,memo);
    res=min(res,dp(i-1,j-1,t,memo)+llabs((long long)i-(long long)t[j]));
    return res;
}
void solve(){
    int n;
    cin>>n;
    vector<int> t(n+1);
    for(int i=1;i<=n;i++){
        cin>>t[i];
    }
    sort(t.begin()+1,t.end());
    vector<vector<long long>> memo(2*n+1,vector<long long>(n+1,-1));
    cout<<dp(2*n,n,t,memo)<<endl;
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