#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
vector<long long> arr1(19),arr2(19); 
void solve(){
    int n,m;
	cin>>n>>m;
	int x=0,y=0; 
	int temp=n;
	while(temp%2==0){
		x++;      
		temp/=2;
	}
	temp=n;
	while(temp%5==0){
		y++;    
		temp/=5;
	}
	for(int i=18;i>=0;i--){
		int extra2=max(0,i-x);
		int extra5=max(0,i-y);
		long long need=arr1[extra2]*arr2[extra5];
		if(need<=m){
			int K=m-m%need;
			cout<<1LL*K*n<<endl;
			return;
		}
	}
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    arr1[0]=1;
	arr2[0]=1;
	for(int i=1;i<=18;i++){
		arr1[i]=2*arr1[i-1];
		arr2[i]=5*arr2[i-1];
	}
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}