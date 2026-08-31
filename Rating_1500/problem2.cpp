#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
	cin>>n;
	vector<int> a(n);
	for(auto &i:a){
		cin>>i; 
	}
	int sum=accumulate(a.begin(),a.end(),0LL);
	int rem=sum/2; 
    int res=sum-rem; 
	sort(a.rbegin(),a.rend()); 
	for(auto x:a){
		if(rem<=0){
			break; 
        }
		rem-=x; 
		res++; 
	}
	cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}