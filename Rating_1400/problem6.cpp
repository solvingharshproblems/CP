#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
vector<int> a(200000);
vector<vector<int>> pre(30,vector<int>(200001));
int range_and(int l,int r){
	int res=0;
	for(int i=0;i<30;i++){
		if(pre[i][r+1]-pre[i][l]==0){
			res+=(1<<i);
		}
	}
	return res;
}
void solve(){
    int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<30;j++){
		pre[j][0]=0;
		for(int i=0;i<n;i++){
			if((1<<j) & a[i]){
				pre[j][i+1]=pre[j][i];
			} 
            else{
				pre[j][i+1]=pre[j][i]+1;
			}
		}
	}
	int q;
	cin>>q;
	while (q--){
		int l,k;
		cin>>l>>k;
		l--;
		if(a[l]<k){
			cout<<-1<<' ';
			continue;
		}
		int low=l,high=n-1;
		while(low<high){
			int mid=(low+high+1)/2;
			if(range_and(l,mid)>=k){
				low=mid;
			} 
            else{
				high=mid-1;
			}
		}
		cout<<low+1<<' ';
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