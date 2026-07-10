#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n; 
	cin>>n;
	vector<long long> v(n); 
	for(int i=0;i<n;i++){ 
		cin>>v[i];
	}
	long long res=LLONG_MIN,sum=0; 
	int i=0,j=0;
	while(j<n){ 
		if(sum<0){
			sum=0;
			i=j;
		}
        if(i<j){
            if((v[j]^v[j-1])&1){
                sum+=v[j];
            } 
            else{
                sum=v[j];
                i=j;
            }
        } 
        else{
            sum=v[j];
        }
        res=max(res,sum);
        j++;
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