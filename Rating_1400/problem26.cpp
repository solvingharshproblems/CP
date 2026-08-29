#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
	cin>>n;
    vector<int> a(n);
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		a[temp-1]++; 
	}
	sort(a.begin(),a.end(),greater<>()); 
	int last=INT_MAX; 
	long long res=0; 
	for(int i=0;i<n && last>0;i++){
		if(a[i]>=last){
			res+=last-1;
			last--; 
		} 
        else {
			res+=a[i];
			last=a[i]; 
		}
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