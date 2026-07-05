#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
vector<long long> primes;  
void solve(){
    long long d;
    cin>>d;
    long long p=-1;
    for(long long i=0;i<primes.size();i++){
        if(primes[i]>=1+d){
            p=primes[i];
            break;
        }
    }
    long long q=-1;
    for(long long i=0;i<primes.size();i++){
        if(primes[i]>=p+d){
            q=primes[i];
            break;
        }
    }
    long long res=min(p*p*p,p*q);
    cout<<res<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(long long i=2;i<=100000;i++){
        bool is_prime=true;
        for(long long j=2;j*j<=i;j++){
            if(i%j==0){
                is_prime=false;
                break;
            }
        }
        if(is_prime){
            primes.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}