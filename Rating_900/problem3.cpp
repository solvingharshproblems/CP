#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,k,x;
    cin>>n>>k>>x;
    long long minSum=(k*(k+1))/2;
    long long maxSum=(n*(n+1))/2-((n-k)*(n-k+1))/2;
    if(x>=minSum && x<=maxSum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}