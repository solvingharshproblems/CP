#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,m;
	cin>>n>>m;
	vector<int> arr(n+1,0);
	for(int i=0;i<m;i++){
		int a,b;
	    cin>>a>>b;
		if(a>b){
			swap(a,b);
		}              
		arr[b]=max(arr[b],a); 
	}
	vector<int> Max(n+1);
	Max[1]=1; 
	long long res=1; 
	for(int i=2;i<=n;i++){
		Max[i]=max(Max[i-1],arr[i]+1);
		res+=i-Max[i]+1;
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