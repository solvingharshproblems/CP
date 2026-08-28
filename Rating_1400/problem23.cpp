#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
	cin>>n;
    vector<int> b(n);
	for(int i=0;i<n;i++){
		cin>>b[i];
    }
	map<int,long long> poss; 
	for(int i=0;i<n;i++){
		poss[i-b[i]]+=b[i];
	}
	long long res=0;
	for(auto [key,sum]:poss){
		res=max(res,sum);
	}
	cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}