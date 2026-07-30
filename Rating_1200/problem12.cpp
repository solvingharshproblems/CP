#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<long long> x(n),y(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    multiset<int> ms;
	for(int i=0;i<n;i++){
		ms.insert(y[i]-x[i]); 
    }
	int res=0; 
	while(ms.size()>1){
		int x=*ms.begin(); 
		ms.erase(ms.begin()); 
		auto it=ms.lower_bound(-x); 
		if(it==ms.end()){
			continue; 
        }
		res++; 
		ms.erase(it); 
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