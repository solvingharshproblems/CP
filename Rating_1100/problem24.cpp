#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n; 
	cin>>n;
	int res=(1<<30)-1;
	for(int i=0;i<n;i++){ 
		int x;
		cin>>x;
		if(x!=i){
			res&=x; 
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