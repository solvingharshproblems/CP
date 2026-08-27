#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int a,b,k;
    cin>>a>>b>>k;
    vector<int> count1(a),count2(b);
    for(int i=0;i<k;i++){
        int temp;
        cin>>temp;
        count1[temp-1]++;
    }
    for(int i=0;i<k;i++){
        int temp;
        cin>>temp;
        count2[temp-1]++;
    }
    long long res=1LL*k*(k-1)/2;
    for(long long x:count1){
        res-=x*(x-1)/2;
    }
    for(long long x:count2){
        res-=x*(x-1)/2;
    }
    cout<<res<<endl;
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