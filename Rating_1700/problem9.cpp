#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> out(n);
    vector<int> indeg(n, 0);

    for (int s = 0; s < k; s++) {
      vector<int> v(n);
      for (int j = 0; j < n; j++)
        cin >> v[j];

      for (int j = 2; j < n; j++) {
        int u = v[j - 1] - 1;
        int w = v[j] - 1;
        out[u].push_back(w);
        indeg[w]++;
      }
    }

    queue<int> q;
    for (int i = 0; i < n; i++)
      if (indeg[i] == 0)
        q.push(i);

    vector<int> topo;
    while (!q.empty()) {
      int x = q.front();
      q.pop();
      topo.push_back(x);
      for (int y : out[x]) {
        if (--indeg[y] == 0)
          q.push(y);
      }
    }

    cout << ((int)topo.size() == n ? "YES\n" : "NO\n");
  }

  return 0;
}
