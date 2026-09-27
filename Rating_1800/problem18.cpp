#include <bits/stdc++.h>
using namespace std;
vector<long long> parent;
vector<long long> sz;
void make_set(long long v) {
    parent[v] = v;
    sz[v] = 1;
}
long long find_set(long long v) {
    if (v == parent[v]) {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}
void union_sets(long long a, long long b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b]) {
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
}
struct Edge {
    long long u, v, w;
};
void solve(){
    long long n, m, k;
    cin >> n >> m >> k;
    parent.resize(n + 1);
    sz.resize(n + 1);
    for (long long i = 1; i <= n; i++) {
        make_set(i);
    }
    vector<Edge> edges(m);
    for (int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
    sort(edges.begin(), edges.end(), [&](const Edge& a, const Edge& b) {
        return a.w < b.w;
    });
    long long ans = 0;
    const long long INF = 9e18;
    for (const auto& e : edges) {
        if (e.w < k && find_set(e.u) != find_set(e.v)) {
            union_sets(e.u, e.v);
        }
    }
    bool taken_edge_above_k = false;
    long long min_cost = INF;
    for (const auto& e : edges) {
        min_cost = min(min_cost, llabs(k - e.w));
        if (e.w >= k && find_set(e.u) != find_set(e.v)) {
            ans += e.w - k;
            union_sets(e.u, e.v);
            taken_edge_above_k = true;
        }
    }
    if (!taken_edge_above_k) {
        ans = min_cost;
    }
    cout << ans << "\n";
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