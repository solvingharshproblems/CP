#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin >> n;
    vector<long long> sizes(n);
    for (int i = 0; i < n; i++) {
        cin >> sizes[i];
    }

    map<long long, long long> freq;
    for (int i = 0; i < n; i++) {
        freq[sizes[i]]++;
    }

    long long flag = 0;
    for (auto i : freq) {
        if (i.second == 1) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << -1 << endl;
        return;
    }

    vector<long long> students(n);
    for (int i = 0; i < n; i++) {
        students[i] = i + 1;
    }

    long long l = 0, r = 0;
    while (r < n) {
        if (sizes[l] == sizes[r]) {
            r++;
        } else {
            rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);
            l = r;
        }
    }
    rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);

    for (auto i : students) {
        cout << i << " ";
    }
    cout << endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}