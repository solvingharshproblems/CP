#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
#define int long long
bool reachable(unsigned long long X, unsigned long long Y) {
    if (Y < X) {
        return false;
    }
    if (__builtin_popcountll(Y) > __builtin_popcountll(X)) {
        return false;
    }
    while (Y != 0) {
        long long lsbIndexY = __builtin_ctzll(Y);
        long long lsbIndexX = __builtin_ctzll(X);
        if (lsbIndexY < lsbIndexX) {
            return false;
        }
        Y &= (Y - 1);
        X &= (X - 1);
    }
    return true;
}
void solve(){
    long long u,v;
    cin>>u>>v;
    bool ok = reachable((unsigned long long)u, (unsigned long long)v);
    cout << (ok ? "YES\n" : "NO\n");
}
signed main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}