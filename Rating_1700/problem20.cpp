#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
      cin >> x;

    vector<int> pref = a;
    for (int i = 1; i < n; i++)
      pref[i] ^= pref[i - 1];

    ll ans = (ll)n * (n + 1) / 2;
    for (int k = 0; k <= sqrt(2 * n); k++) {
      vector<int> cnt(2 * n + 1, 0);
      cnt[0]++;
      for (int i = 0; i < n; i++) {
        int want = pref[i] ^ (k * k);
        if (want <= 2 * n)
          ans -= cnt[want];
        cnt[pref[i]]++;
      }
    }
    cout << ans << "\n";
  }

  return 0;
}
