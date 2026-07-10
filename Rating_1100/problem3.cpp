#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n; 
	cin>>n;
	long long a; 
	vector<pair<long long,long long>> v;
	for(int i=0;i<n;i++){ 
		cin>>a;
		v.push_back({a,i});
	}
	vector<long long> pre(n);
	sort(v.begin(),v.end()); 
	pre[0]=v[0].first;
	for(int i=1;i<n;i++){ 
		pre[i]=pre[i-1]+v[i].first;
	}
	vector<long long> res(n);
	for(int i=0;i<n;i++){ 
		int j=i,found=i;
		while(j<n){
			pair<long long,long long> temp={pre[j]+1,INT_MIN};
			long long index=lower_bound(v.begin(),v.end(),temp)-v.begin();
			index--;
			if(index==j){
				break;
			}
			found+=index-j;
			j=index;
		}
		res[v[i].second]=found;
	}
	for(int i=0;i<n;i++){ 
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