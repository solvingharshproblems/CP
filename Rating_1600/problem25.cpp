#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(b==0){
        return abs(a);
    }
    return gcd(b,a%b);
}
int main(){
    long long n,m;
    cin>>n>>m;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long g=0;
    for(long long i=1;i<n;i++){
        g=gcd(g,abs(a[i]-a[0]));
    }
    for(long long i=0;i<m;i++){
        long long x;
        cin>>x;
        cout<<gcd(g,a[0]+x)<<" ";
    }
    return 0;
}