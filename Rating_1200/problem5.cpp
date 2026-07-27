#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vector<int> colours[k+1];
	for(int i=1;i<=k;i++){
		colours[i].push_back(0); 
	}
	for(int i=0;i<n;i++){
		colours[c[i]].push_back(i+1); 
	}
	for(int i=1;i<=k;i++){
		colours[i].push_back(n+1); 
	}
	priority_queue<int> pq[k+1]; 
	int res=INT_MAX; 
	for(int i=1;i<=k;i++){
		for(int j=0;j<colours[i].size()-1;j++){
			pq[i].push(colours[i][j+1]-colours[i][j]-1);
		} 
		int Max=pq[i].top(); 
		pq[i].pop(); 
		if(Max%2==0){
			pq[i].push(Max/2);
			pq[i].push((Max/2)-1);
		}
		else{
			pq[i].push(Max/2);
			pq[i].push(Max/2);
		}
		res=min(res,pq[i].top()); 
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