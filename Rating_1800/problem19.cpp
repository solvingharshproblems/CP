#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> cnt(60, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        for (int j = 0; j < 60; j++) {
            if (v[i] & (1LL << j)) {
                cnt[j]++;
                cnt[j] %= MOD;
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 0; j < 60; j++) {
            if (v[i] & (1LL << j)) {
                sum1 += ((1LL << j) % MOD) * cnt[j];
                sum2 += ((1LL << j) % MOD) * n;
                sum1 %= MOD;
                sum2 %= MOD;
            } else {
                sum2 += ((1LL << j) % MOD) * cnt[j];
                sum2 %= MOD;
            }
        }
        res += (sum1 * sum2) % MOD;
        res %= MOD;
    }
    cout << res % MOD << endl;
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