#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    const int RC=2023;
    const int N=RC*(RC+1)/2;
    vector<long long> dp1(N,0),dp2(N,0);
    dp1[0]=dp2[0]=1;
    long long index=1;
    for(int i=1;i<RC;i++){
        int prev=index-i;
        for(int j=0;j<=i;j++){
            long long cur=(long long)(index+1)*(index+1);
            dp1[index]=cur+((j>0)?dp1[prev+j-1]:0LL);
            dp2[index]=dp1[index]+((j<i)?dp2[prev+j]:0LL);
            index++;
        }
    }
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        --n;
        cout<<dp2[n]<<endl;
    }
    return 0;
}