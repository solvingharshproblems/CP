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
	int Max=0; 
	for(int i=1;i<n;i++){
		if(a[i-1]>a[i]){ 
			Max=max(Max,a[i-1]-a[i]); 
			a[i]=a[i-1]; 
		}
	}
	int res=0;
	if(Max>0){
		res=static_cast<int>(log2(Max))+1; 
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