#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int MAXA=1000000;
    vector<unsigned long long> mask(MAXA+1);
    mt19937_64 rng((unsigned)chrono::high_resolution_clock::now().time_since_epoch().count());
    for(int i=1;i<=MAXA;i++){
        mask[i]=rng();
    }
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<unsigned long long> pref(n+1,0);
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]^mask[a[i]];
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            unsigned long long x=pref[r]^pref[l-1];
            cout<<(x==0?"YES\n":"NO\n");
        }
    }
    return 0;
}