#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
	cin>>n>>k; 
	int res=n;
	for(int j=1;j*j<=n;j++){ 
		if(j>k){
            break;
        }
		if(n%j==0){ 
			res=min(res,n/j); 
			if(n/j<=k){
				res=min(res,j); 
            }
		}
	}	
	cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}