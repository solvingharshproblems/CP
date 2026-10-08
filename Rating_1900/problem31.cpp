#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,q,sum=0,Max=0; 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;              
		sum+=x;        
		Max=max(Max,(sum+i-1)/i);
	}
	cin>>q;
	while(q--){
		cin>>x; 
		if(x<Max){
			cout<<-1<<endl;
		}
		else{
			cout<<(sum+x-1)/x<<endl;
		}
	}
    return 0;
}