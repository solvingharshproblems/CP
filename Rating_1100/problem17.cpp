#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,k;
    cin>>n>>k;
    long long arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    long long count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[n-i-1][n-j-1]){
                count++;
            }
        }
    }
    count/=2;
    if(count>k){
        cout<<"NO"<<endl;
    } 
    else{
        long long temp=k-count;
        if(temp%2==0){
            cout<<"YES"<<endl;
        } 
        else{
            if(n%2==0){
                cout<<"NO"<<endl;
            } 
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}