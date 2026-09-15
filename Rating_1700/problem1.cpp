#include <bits/stdc++.h>
#include <numeric>
using namespace std;
using ll = long long;
template <typename T, T DefaultValue = T(), typename Operation = std::plus<T>>
class segtree {
    vector<T> v;
    int N = 1;
    Operation op;

public:
    segtree(vector<T>& a) {
        while (N < (int)a.size()) N *= 2;
        v = vector<T>(2 * N - 1, DefaultValue);
        (void)build(0, 0, N - 1, a);
    }
    T build(int i, int L, int R, vector<T>& a) {
        if (L == R) return v[i] = (L < (int)a.size() ? a[L] : DefaultValue);
        int M = (L + R) / 2;
        return v[i] = op(build(i * 2 + 1, L, M, a), build(i * 2 + 2, M + 1, R, a));
    }
    T get(int x) { 
        return v[N - 1 + x]; 
    }
    void point_upd(int x, T val, int i, int L, int R) {
        if (L == R) {
            v[i] = val;
            return;
        }
        int M = (L + R) / 2;
        if (x <= M){
            point_upd(x, val, i * 2 + 1, L, M);
        }
        else{
            point_upd(x, val, i * 2 + 2, M + 1, R);
        }
        v[i] = op(v[2 * i + 1], v[2 * i + 2]);
    }
    void point_upd(int x, T val) { 
        point_upd(x, val, 0, 0, N - 1); 
    }
    void point_op(int x, T val) { 
        point_upd(x, op(get(x), val), 0, 0, N - 1); 
    }
    T query(int ql, int qr, int i, int L, int R) {
        if (R < ql || L > qr){
            return DefaultValue;
        }
        if (ql <= L && R <= qr){
            return v[i];
        }
        int M = (L + R) / 2;
        return op(query(ql, qr, i * 2 + 1, L, M), query(ql, qr, i * 2 + 2, M + 1, R));
    }
    T query(int ql, int qr) { 
        return query(ql, qr, 0, 0, N - 1); 
    }
};
struct GcdOperation {
    template <typename T>
    T operator()(const T& a, const T& b) const {
        return std::gcd(a, b);
    }
};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc;
	cin >> tc;
	while (tc--) {
		ll n, q;
		cin >> n >> q;
		vector<ll> a(n);
		for (auto& x : a) cin >> x;
		vector<ll> d;
		d.reserve(max(0LL, n - 1));
		for (ll i = 1; i < n; i++){
            d.push_back(llabs(a[i] - a[i - 1]));
		}
		segtree<ll, 0, GcdOperation> seg(d);
		while (q--) {
			ll l, r;
			cin >> l >> r;
			--l, --r;
			cout << seg.query(l, r - 1) << ' ';
		}
		cout <<endl;
	}
	return 0;
}