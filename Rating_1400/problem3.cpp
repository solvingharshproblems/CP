#include <bits/stdc++.h>
using namespace std;
vector<int> Start(200000),End(200000);
bool isReachable(int count,int maxJump){
	int Min=0; 
	int Max=0;  
	for(int i=0;i<count;i++){
		Max+=maxJump;
		Min-=maxJump;
		int reachableStart=max(Min,Start[i]);
		int reachableEnd=min(Max,End[i]);
		if(reachableStart>reachableEnd){
			return false;
		}
		Min=reachableStart;
		Max=reachableEnd;
	}
	return true;
}
void solve(){
	int count;
	cin>>count;
	for(int i=0;i<count;i++){
		cin>>Start[i]>>End[i];  
	}
	int low=0,high=1e9; 
	while(low<high){
		int mid=(low+high)/2; 
		if(isReachable(count,mid)){
			high=mid;
		}
		else{
			low=mid+1;
		}
	}
	cout<<low<<endl; 
}
int main(){
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		solve();
	}
}
