#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int __gcd(int a,int b){
    if(b==0){ 
        return a;
    }
    return __gcd(b,a%b);
}
void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long gcd1=0,gcd2=0;
    for(int i=0;i<n;i++){
        if(i&1){
            gcd2=__gcd(gcd2,a[i]);
        } 
        else{
            gcd1=__gcd(gcd1,a[i]);
        }
    }
    bool flag=true;
    for(int i=1;i<n;i+=2){
        if(a[i]%gcd1==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<gcd1<<endl;
        return;
    }
    flag=true;
    for(int i=0;i<n;i+=2){
        if(a[i]%gcd2==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<gcd2<<endl;
    } 
    else{
        cout<<0<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}