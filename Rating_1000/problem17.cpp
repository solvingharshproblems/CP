#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin>>n;
    n--;
    long long msb=log2(n);
    vector<long long> res;
    long long num=pow(2,msb)-1;
    while(num>=0){
        res.push_back(num);
        num--;
    }
    num=pow(2,msb);
    while(num<=n){
        res.push_back(num);
        num++;
    }
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}