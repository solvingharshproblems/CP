#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int n,m,q;
vector<pair<int,int>>seg;
vector<int> arr;
bool check(int x){
	vector<int> a(n,0);
	for(int i=0;i<x;i++){
		a[arr[i]]=1;
	}
	for(int i=1;i<n;i++){
		a[i]+=a[i-1];
	}
	for(auto &[l,r]:seg){
		int sum=a[r]-(l>0?a[l-1]:0);
		if(sum>(r-l+1)/2){
			return true;
		}
	}
	return false;
}
void solve(){
	cin>>n>>m;
	seg.resize(m);
	for(auto &[l,r]:seg){
		cin>>l>>r;
		l--;
		r--;
	}
	cin>>q;
	arr.resize(q);
	for(auto &x:arr){
		cin>>x;
		x--;
	}
	int l=1,r=q,res=INT_MAX;
	while(l<=r){
		int mid=(l+r)/2;
		if(check(mid)){
			res=min(res,mid);
			r=mid-1;
		} 
		else{
			l=mid+1;
		}
	}
	cout<<(res==INT_MAX?-1:res)<<endl;
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