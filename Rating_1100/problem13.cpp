#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int __gcd(int a,int b){
    if(b==0){
        return a;
    }
    return __gcd(b,a%b);
}
void solve(){
    int n;
	cin>>n;
    vector<int> a(n);
	for(auto &i:a){ 
        cin>>i;
	}
	int res=0;
	for(int i=0;i<n;i++){
		res=__gcd(res,abs(a[i]-a[n-i-1]));
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