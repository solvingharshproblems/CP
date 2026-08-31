#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF=1e18;
int setbits(int n){
    return __builtin_popcountll(n);
}
void solve(){
    int n;
    cin>>n;
    vector<int> fact(15);
    fact[0]=1;
    for(int i=1;i<=14;i++){
        fact[i]=fact[i-1]*i;
    }
    vector<int> vec;
    for(int i=3;i<=14;i++){
        vec.push_back(fact[i]);
    }
    int res=INF;
    for(int mask=0;mask<(1LL<<12);mask++){
        int sum=0;
        int cnt=0;
        for(int i=0;i<12;i++){
            if(mask&(1LL<<i)){
                sum+=vec[i];
                cnt++;
            }
        }
        if(sum>n){
            continue;
        }
        cnt+=setbits(n-sum);
        res=min(res,cnt);
    }
    cout<<res<<endl;
}
int32_t main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}