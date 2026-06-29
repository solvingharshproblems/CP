#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,k,b,s;
    cin>>n>>k>>b>>s;
    long long Min=k*b;
    long long Max=(k*b)+(k-1)*n;
    if(s<Min || s>Max){
        cout<<"-1"<<endl;
    }
    else{
        vector<long long> res(n,0);
        res[0]=Min;
        s-=Min;
        for(int i=0;i<n;i++){
            long long add=min(k-1,s);
            res[i]+=add;
            s-=add;
        }
        for(long long i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}