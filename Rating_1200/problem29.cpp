#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
	cin>>n>>k;
	k--; 
	if(n%2==0){
		int res=k%n+1;
		cout<<res<<endl; 
	}
	else{
		int res=((k+(k/(n/2)))%n)+1; 
		cout<<res<<endl;
	}
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}