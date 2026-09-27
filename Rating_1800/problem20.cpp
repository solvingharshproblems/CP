#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    vector<int> L(n);
    vector<int> R(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
        L[i] = arr[i].first;
        R[i] = arr[i].second;
    }
    sort(L.begin(), L.end());
    sort(R.begin(), R.end());
    int res = n;
    for (int i = 0; i < n; ++i) {
        int l = arr[i].first;
        int r = arr[i].second;
        int left = lower_bound(R.begin(), R.end(), l) - R.begin();
        int right = static_cast<int>(L.end() - upper_bound(L.begin(), L.end(), r));
        int curr = left + right;
        res = min(res, curr);
    }
    cout << res << endl;
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