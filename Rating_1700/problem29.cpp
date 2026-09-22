#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
vector<ll> pow2;
static inline ll add(ll a, ll b, ll m = MOD){
    return ((a % m) + (b % m) + m) % m;
}
static inline ll mul(ll a, ll b, ll m = MOD){
    return ((a % m) * (b % m)) % m;
}
void solve(){
    int n, k;
    cin >> n >> k;
    vector<array<ll, 2>> dp(k + 1, {0, 0});
    dp[0][1] = 1;
    for (int i = 1; i <= k; ++i){
        dp[i][0] = mul(pow2[n], dp[i - 1][0]);
        if ((n % 2) == 0){
            dp[i][0] = add(dp[i][0], dp[i - 1][1]);
        }
        ll eq = mul(add(pow2[n - 1], -((n % 2) == 0)), dp[i - 1][1]);
        if((n%2)==1){
            eq=add(eq,dp[i-1][1]);
        }
        dp[i][1]=eq;
    }
    cout<<add(dp[k][0],dp[k][1])<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    const int NMAX = 200000 + 5; 
	vector<ll> pow2(NMAX);
	pow2[0] = 1;
	for (int i = 1; i < NMAX; ++i){
        pow2[i] = mul(2, pow2[i - 1]);
    }
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}