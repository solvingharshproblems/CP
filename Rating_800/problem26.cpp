#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int __gcd(int a,int b){
    if(b==0) return a;
    return __gcd(b,a%b);
}
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool res=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(a[i],a[j])<=2){
                res=true;
            }
        }
    }
    if(res){
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