#include <bits/stdc++.h>
using namespace std;
const int MOD=998244353;
void solve(){
    string s;
	cin>>s; 
	int n=s.size(); 
	long long res=1; 
	int len=1,curr=1; 
	for(int i=1;i<n;i++){ 
		if(s[i]!=s[i-1]){
			len++; 
			res=(res*curr)%MOD; 
			curr=1; 
		} 
		else{
			curr++; 
		}
	}
	res=(res*curr)%MOD;
	for(int i=1;i<=n-len;i++){ 
		res=(res*i)%MOD;
	}
	cout<<n-len<<" "<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}
