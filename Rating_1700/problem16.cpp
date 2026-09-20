#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (auto &perm : v)
      for (auto &x : perm)
        cin >> x;

    set<vector<int>> s;
    for (int i = 0; i < n; ++i) {
      vector<int> inv(m);
      for (int j = 0; j < m; ++j) {
        inv[v[i][j] - 1] = j + 1;
      }
      vector<int> pref;
      pref.reserve(m);
      for (int j = 0; j < m; ++j) {
        pref.push_back(inv[j]);
        s.insert(pref);
      }
    }

    for (int i = 0; i < n; ++i) {
      int ans = 0;
      vector<int> pref;
      pref.reserve(m);
      for (int j = 0; j < m; ++j) {
        pref.push_back(v[i][j]);
        if (!s.count(pref))
          break;
        ++ans;
      }
      cout << ans << ' ';
    }
    cout << '\n';
  }

  return 0;
}
