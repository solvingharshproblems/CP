#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
	cin>>n;
	string s;
	cin>>s; 
	long long sum=0,res=0; 
	for(int i=0;i<n;i++){
		if(s[i]==')'){
			sum--; 
        }
		else{
			sum++; 
        }
        if(sum<0){
			res++; 
			sum=0; 
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