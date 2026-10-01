#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
#define int uint64_t
int xor_0_n(int n){
	if(n%4==0){
		return n;
	}
	if(n%4==1){
		return 1;
	}
	if(n%4==2){
		return n+1;
	}
	return 0;
}
int xor_range(int l, int r){
	return xor_0_n(r)^xor_0_n(l-1);
}
void solve(){
    int l,r,i,k;
	cin>>l>>r>>i>>k;
	int pw=1ULL<<i; 
	int mL=(l-k+pw-1)/pw; 
	int mR=(r-k)/pw;     
	int highBits=0,lowBits=0;
	if(mL<=mR){
		int count=mR-mL+1;
		highBits=xor_range(mL,mR)<<i;
		if(count&1){
			lowBits=k;
		}
	}
	int removed=highBits^lowBits;
	int res=xor_range(l,r)^removed;
	cout<<res<<endl;
}
int32_t main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}