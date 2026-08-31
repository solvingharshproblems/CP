#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}
int32_t main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n;
	cin>>n;
	string s;
	cin>>s; 
	int c1=count(s.begin(),s.end(),'+'); 
	int c2=n-c1; 
	int q;
	cin>>q;
    while(q--){
	    int a,b;
		cin>>a>>b;
		if(c1==c2){
			cout<<"YES"<<endl;
        	continue;
		}
		if(a==b){
			cout<<"NO"<<endl;
			continue;
		}
		int l=lcm(a,b); 
		int x=l/a,y=l/b; 
		if(abs(c2-c1)%abs(y-x)==0){
			int p=abs(c2-c1)/abs(y-x); 
			if((x+y)*p>n){
				cout<<"NO"<<endl;
			} 
            else{
				cout<<"YES"<<endl;
			}
		} 
        else{
			cout<<"NO"<<endl;
		}
	} 
	return 0;
}