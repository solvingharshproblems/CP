#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<long long> arr1(2*n+1,0),arr2(2*n+1,0);
	long long count=1; 
	for(int i=1;i<n;i++){
		if(a[i]==a[i-1]){
			count++;
		}
		else{
			arr1[a[i-1]]=max(arr1[a[i-1]],count);
			count=1; 
		}
	}
	arr1[a[n-1]]=max(arr1[a[n-1]],count);
	count=1;
	for(int i=1;i<n;i++){
		if(b[i]==b[i-1]){
			count++;
        }
		else{
			arr2[b[i-1]]=max(arr2[b[i-1]],count);
			count=1; 
		}
	}
	arr2[b[n-1]]=max(arr2[b[n-1]],count);
	long long res=-1; 
	for(int i=1;i<=2*n;i++){
		res=max(res,arr1[i]+arr2[i]);
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