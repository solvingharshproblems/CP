#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    vector<vector<int>> dp(n+1,vector<int>(4,0));
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<n;i++){ 
		if(s[i]=='v' && s[i-1]=='v'){
			dp[i+1][1]+=dp[i-1][0]; 
			dp[i+1][3]+=dp[i-1][2]; 
		} 
        else if(s[i]=='o'){
			dp[i+1][2]+=dp[i][1];
		}
		dp[i+1][1]+=dp[i][1];
		dp[i+1][2]+=dp[i][2];
		dp[i+1][3]+=dp[i][3];
	}
	cout<<dp[n][3]<<endl;
    return 0;
}