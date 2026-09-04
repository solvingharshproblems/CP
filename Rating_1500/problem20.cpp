#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
	cin>>n; 
	vector<int> a(n);
	for(auto &i:a){
		cin>>i; 
	}
	int sum=accumulate(a.begin(),a.end(),0LL); 
	int Max=*max_element(a.begin(),a.end());    
	if(sum%2 || Max>sum-Max){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
    return 0;
}