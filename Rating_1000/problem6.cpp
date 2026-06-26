#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,k,q;
	cin>>n>>k>>q; 
	vector<long long> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i]; 
		a[i]=(a[i]>q) ? 0 : 1;
	}
	long long count1=0,res=0;
	for(int i=0;i<n;i++){
		if(a[i]==1){
			count1++; 
		}
		else{
			if(count1>=k){
				long long diff=count1-k+1;
			    res+=(diff*(diff+1))/2; 
			}
			count1=0; 
		}
	}
	if(count1>=k){
		long long diff=count1-k+1;
		res+=(diff*(diff+1))/2;
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