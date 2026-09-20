#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin >> n;
    vector<int> deg(n, 0);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        deg[u]++;
        deg[v]++;
    }
    string s;
    cin >> s;
    int Z = 0, O = 0, Q = 0, U = 0;
    for (int i = 1; i < n; ++i) {
        if (deg[i] == 1) {
            if (s[i] == '0') {
                ++Z;
            } 
            else if (s[i] == '1') {
                ++O;
            } 
            else {
                ++Q;
            }
        } 
        else {
            if (s[i] == '?') {
                ++U;
            }
        }
    }
    if (s[0] != '?') {
        cout << ((s[0] == '1' ? Z : O) + (Q + 1) / 2) << "\n";
    } 
    else {
        if (Z == O && (U % 2 == 1)) {
            cout << (Z + (Q + 1) / 2) << "\n";
        } 
        else {
            cout << (max(Z, O) + Q / 2) << "\n";
        }
    }
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