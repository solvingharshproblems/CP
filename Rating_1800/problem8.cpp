#include <bits/stdc++.h>
using namespace std;
vector<int> bfs(int src, const vector<vector<int>> &g) {
    int n = g.size();
    vector<int> dist(n, -1);
    queue<int> q;
    q.push(src);
    dist[src] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : g[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}
int find_farthest(int start, const vector<vector<int>> &g) {
    auto dist = bfs(start, g);
    return int(max_element(dist.begin(), dist.end()) - dist.begin());
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int A = find_farthest(0, g);
    int B = find_farthest(A, g);
    auto distA = bfs(A, g);
    auto distB = bfs(B, g);
    vector<vector<int>> layer(n + 1);
    for (int i = 0; i < n; i++) {
        int d = max(distA[i], distB[i]);
        layer[d].push_back(i);
    }
    vector<int> ans(n + 1, 0);
    vector<int> vis;
    for (int k = n; k >= 1; k--) {
        vis.insert(vis.end(), layer[k].begin(), layer[k].end());
        ans[k] = min(n, n - int(vis.size()) + 1);
    }
    for (int k = 1; k <= n; k++) {
        cout << ans[k] << " ";
    }
    cout <<endl;
    return 0;
}