#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	int res=0; 
	for(int i=0;i<(k+1)/2;i++){ 
		vector<int> freq(26,0); 
	    for(int j=0;j<n/k;j++){ 
		    int index1=j*k+i; 
		    int index2=(j+1)*k-i-1; 
		    freq[s[index1]-'a']++; 
		    if(index1!=index2){
		        freq[s[index2]-'a']++;
		    }
		}
		int Max=*max_element(freq.begin(),freq.end()); 
		int s=accumulate(freq.begin(),freq.end(),0LL); 
		res+=s-Max; 
	}
	cout<<res<<endl; 
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