#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int GCD(int a,int b){
    if(b==0) return a;
    return GCD(b,a%b);
}
void solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int k=abs(p[0]-1);
    for(int i=1;i<n;i++){
        k=GCD(k,abs(p[i]-(i+1)));
    }
    cout<<k<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}