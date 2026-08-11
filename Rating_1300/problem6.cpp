#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
	cin>>n; 
	vector<int> a(n),b(n),arr(n);
	int Max=INT_MIN; 
	for(int i=0;i<n;i++){ 
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		arr[i]=a[i]-b[i];
		Max=max(Max,arr[i]);
	}
	vector<int> res;
	for(int i=0;i<n;i++){ 
		if(arr[i]==Max){
			res.push_back(i+1); 
		}
	}
	cout<<res.size()<<endl; 
	for(int i=0;i<res.size();i++){ 
		cout<<res[i]<<" "; 
	}
	cout<<endl; 
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}