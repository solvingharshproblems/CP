#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,s;
    cin>>n>>s;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int len = -1;
	map<int, int> mp; 
	mp[0] = -1;
	int sum = 0; 
	for (int i = 0; i < n; i++){
		sum += a[i]; 
		if (mp.count(sum - s)){
			len = max(len, i - mp[sum - s]); 
		}
		if (!mp.count(sum)){
			mp[sum] = i; 
		}
	} 
	if (len == -1){
		cout << "-1"<<endl;
	}
	else{
		cout << (n - len) <<endl;
	}
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}