#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(vector<int>& arr){
    int n;
	cin>>n;
	if(arr[n]){
		cout<<"YES"<<endl;
	} 
    else{
		cout<<"NO"<<endl;
	}
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    vector<int> arr(1e6+1,0);
	for(long long int i=2;i<=10000;i++){ 
		long long int curr=i*i*i;
		long long int temp=(curr-1)/(i-1);
		while(temp<=1e6){ 
			arr[temp]=1; 
			curr*=i;
			temp=(curr-1)/(i-1); 
		}
	}
    while(t--) solve(arr);
}