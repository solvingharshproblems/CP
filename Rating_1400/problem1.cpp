#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,m;
	cin>>n>>m;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	int total=0;      
	vector<int> trailingZeroes(n,0);          
	for(int i=0;i<n;i++){     
		while(arr[i]%10==0){   
			trailingZeroes[i]++;
			arr[i]/=10;
			total++;         
		}
		while(arr[i]>0){         
			total++;
			arr[i]/=10;
		}
	}
	sort(trailingZeroes.begin(),trailingZeroes.end(),greater<>());
	for(int i=0;i<n;i+=2){    
		total-=trailingZeroes[i];
	}
	if(total>m){
		cout<<"Sasha"<<endl;
    }
	else{
		cout<<"Anna"<<endl;
    }
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