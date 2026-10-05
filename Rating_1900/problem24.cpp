#include <bits/stdc++.h>
using namespace std;
const long long MOD=998244353;
long long power(long long a,long long b){
    long long r=1;
    while(b){
        if(b&1){
            r=r*a%MOD;
        }
        a=a*a%MOD;
        b>>=1;
    }
    return r;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int N=2*n;
    vector<long long> a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    unordered_map<long long,int> freq;
    for(long long x:a){
        freq[x]++;
    }
    auto is_prime=[&](long long x){
        if(x<2){
            return false;
        }
        for(long long i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    };
    vector<int> primes,nonprimes;
    for(auto &[val,cnt]:freq){
        if(is_prime(val)){
            primes.push_back(cnt);
        } 
        else{
            nonprimes.push_back(cnt);
        }
    }
    if((int)primes.size()<n){
        cout<<0<<endl;
        return 0;
    }
    vector<long long> fact(N+1),invfact(N+1);
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=fact[i-1]*i%MOD;
    }
    invfact[N]=power(fact[N],MOD-2);
    for(int i=N;i>0;i--){
        invfact[i-1]=invfact[i]*i%MOD;
    }
    int t=(int)primes.size();
    vector<vector<long long>> dp(t+1,vector<long long>(n+1,0));
    dp[t][0]=1;
    for(int i=t-1;i>=0;i--){
        for(int j=0;j<=n;j++){
            dp[i][j]=invfact[primes[i]]*dp[i+1][j]%MOD;
            if(j>0){
                dp[i][j]=(dp[i][j]+invfact[primes[i]-1]*dp[i+1][j-1])%MOD;
            }
        }
    }
    long long common=fact[n];
    for(int c:nonprimes){
        common=common*invfact[c]%MOD;
    }
    long long res=common*dp[0][n]%MOD;
    cout<<res<<endl;
    return 0;
}