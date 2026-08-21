#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    vector<long long> dp(n+1,0);
    for(int i=n-2;i>=0;i--){
        dp[i]=dp[i+1];
        if(s[i]=='v' && s[i+1]=='v'){
            dp[i]++;
		}
    }
    long long sum=0,res=0;
    for(int i=0;i<n;i++){
        if(s[i]=='o'){
            res+=sum*dp[i+1];
        }
        if(i>0 && s[i]=='v' && s[i-1]=='v'){
            sum++;
        }
    }
    cout<<res<<endl;
    return 0;
}