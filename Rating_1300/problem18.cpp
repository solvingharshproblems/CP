#include <iostream>
using namespace std;
int main(){
    int n;
	cin>>n;
	int k=n/2;
	long long res=0;
	if(n%2==0){
		res=(k+1)*(k+1);
	} 
    else{
		res=2*(k+1)*(k+2);
	}
	cout<<res<<endl;
    return 0;
}