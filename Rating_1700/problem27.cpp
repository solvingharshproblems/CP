#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin >> n;
    map<int, int> topicCnt, diffCnt;
    vector<pair<int, int>> problems(n);
    for (auto &p : problems) {
        cin >> p.first >> p.second;
        ++topicCnt[p.first];
        ++diffCnt[p.second];
    }
    long long ans = 1LL * n * (n - 1) * (n - 2) / 6;
    for (const auto &[a, b] : problems) {
        ans -= 1LL * (topicCnt[a] - 1) * (diffCnt[b] - 1);
    }
    cout << ans << '\n';
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