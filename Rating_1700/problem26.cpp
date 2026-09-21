#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l, k;
    cin >> n >> l >> k;
    vector<int> d(n), a(n);
    for (auto &x : d) {
        cin >> x;
    }
    for (auto &x : a) {
        cin >> x;
    }
    d.push_back(l);
    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, LLONG_MAX / 10));
    for (int j = 0; j <= k; j++) {
        dp[n][j] = 0;
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= k; j++) {
            for (int nxt = i + 1; nxt <= min(i + 1 + j, n); nxt++) {
                int removed = nxt - i - 1;
                long long cost = 1LL * a[i] * (d[nxt] - d[i]) + dp[nxt][j - removed];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }
    cout << dp[0][k] << '\n';
    return 0;
}