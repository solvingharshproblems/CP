#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long ceilDivision(long long a,long long b){
	return (a+b-1)/b;
}
void solve(){
    long long x,y,k;
	cin>>x>>y>>k;
	long long sticksGainedPerTrade=x-1;
	long long sticksNeeded=k*y+k-1;
	long long res=0;
	res+=ceilDivision(sticksNeeded,sticksGainedPerTrade);
	res+=k;
	cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}