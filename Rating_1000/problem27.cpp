#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
bool isFair(long long n){
	long long num=n;
	while(num!=0){
		int x=num%10; 
		if(x!=0 && n%x!=0){
			return false;
		}
		num/=10; 
	}
	return true; 
}
void solve(){
    long long n;
    cin>>n;
    while(!isFair(n)){
        n+=1;
    }
	cout<<n<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}