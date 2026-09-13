#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a){
        cin >> x;
	}
    const int MAXA = 200000;
    vector<bool> isPrime(MAXA + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAXA; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXA; j += i) {
                isPrime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= MAXA; i++) {
        if (isPrime[i])
            primes.push_back(i);
    }
    unordered_map<int, int> cnt;
    unordered_map<int, vector<int>> exponents;
    for (int x : a) {
        for (int p : primes) {
            if (1LL * p * p > x)
                break;
            if (x % p != 0)
                continue;
            int e = 0;
            while (x % p == 0) {
                x /= p;
                e++;
            }
            cnt[p]++;
            auto &v = exponents[p];
            v.push_back(e);
            sort(v.begin(), v.end());
            if (v.size() > 2)
                v.pop_back();
        }
        if (x > 1) {
            cnt[x]++;
            auto &v = exponents[x];
            v.push_back(1);
            sort(v.begin(), v.end());
            if (v.size() > 2)
                v.pop_back();
        }
    }
    ll ans = 1;
    for (int p : primes) {
        if (cnt[p] < n - 1)
            continue;
        int e;
        if (cnt[p] == n) {
            e = exponents[p][1];
        } 
		else {
            e = exponents[p][0];
        }
        while (e--) {
            ans *= p;
        }
    }
    cout << ans << '\n';
    return 0;
}