#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin >> n;
    long long c;
    cin >> c;
    vector<long long> cost;
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        cost.push_back(i + x);
    }
    sort(cost.begin(), cost.end());
    int i = 0;
    int ans = 0;
    while (i < n && cost[i] <= c) {
        c -= cost[i];
        ans++;
        i++;
    }
    cout << ans << endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}