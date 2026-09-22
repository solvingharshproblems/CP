#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void addi(int &x,int a){
    x+=a;
    x%=MOD;
}
int add(int a,int b){
    return (a+b)%MOD;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> div_cnt(n+1,0);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            div_cnt[j]++;
        }
    }
    vector<int> dp(n+1);
    dp[0]=0;
    int sum=0;
    for(int i=1;i<=n;i++){
        dp[i]=add(div_cnt[i],sum);
        addi(sum,dp[i]);
    }
    cout<<dp[n];
    return 0;
}