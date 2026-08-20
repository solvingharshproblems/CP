#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
	cin>>n; 
	vector<int> arr; 
	for(int i=2;i*i<=n;i++){ 
		if(n%i!=0){
			continue;
		} 
		arr.push_back(i); 
		n/=i; 
		if(arr.size()==2){
			break; 
		}
	}
	if(n==1 || arr.size()<2 || n==arr[0] || n==arr[1]){
		cout<<"NO"<<endl; 
	} 
	else{
		cout<<"YES"<<endl; 
		cout<<arr[0]<<" "<<arr[1]<<" "<<n<<endl; 
	}
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}   