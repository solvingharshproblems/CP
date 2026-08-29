#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
vector<int> parent,Size;
int find(int a){
	if(a==parent[a]){
		return a;
	}
	return parent[a]=find(parent[a]);
}
void join(int a,int b){
	a=find(a);
	b=find(b);
	if(a==b){
		return;
	}
	if(Size[a]<Size[b]){
		swap(a,b);
	}
	parent[b]=a;
	Size[a]+=Size[b];
}
void solve(){
	int n,m;
	cin>>n>>m;
	parent.resize(n);
	for(int i=0;i<n;i++){
		parent[i]=i;
	}
	Size.resize(n,1);
	for(int i=0;i<m;i++){
		int k;
		cin>>k;
		if(k>0){
			int first;
			cin>>first;
			first--;
			for(int j=1;j<k;j++){
				int a;
				cin>>a;
				a--;
				join(first,a);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<Size[find(i)]<<' ';
	}
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}