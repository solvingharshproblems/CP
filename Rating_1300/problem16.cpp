#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,w;
    cin>>n>>w;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> cnt(21,0);
    for(int i=0;i<n;i++){
        int value=log2(a[i]);
        cnt[value]++;
    }
    int res=0,count=0;
    while(count<n){
        int temp=w;
        for(int i=20;i>=0;i--){
            while(cnt[i]>0 && (1<<i)<=temp){
                temp-=(1<<i);
                cnt[i]--;
                count++;
            }
        }
        res++;
    }
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}