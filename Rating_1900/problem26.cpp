#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int n;
void solve(){
	vector<int> b,p;
	vector<bool> isUsed;
	set<int> unused;
	cin>>n;
	b.assign(n/2,0);
	p.assign(n,0);
	isUsed.assign(n+1,false);
	for(int i=0;i<n/2;i++){
		cin>>b[i];
		p[i*2+1]=b[i];
		isUsed[b[i]]=true;
	}
	for(int x=1;x<=n;x++){
		if(!isUsed[x]){
			unused.insert(x);
		}
	}
	if((int)unused.size()!=n/2){
		cout<<"-1"<<endl;
		return;
	}
	for(int i=n/2-1;i>=0;i--){
		auto k=unused.upper_bound(p[2*i+1]);
		if(k==unused.begin()){
			cout<<"-1"<<endl;
			return;
		}
		--k;
		if(*k<p[2*i+1]){
			p[2*i]=*k;
			unused.erase(k);
		} 
		else{
			cout<<"-1"<<endl;
			return;
		}
	}
	for(int v:p){
		cout<<v<<' ';
	}
	cout<<endl;
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