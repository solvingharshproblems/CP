#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<vector<char>> a(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int res=0;
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<n/2;j++){
            int i1=i,j1=j;
            int i2=j,j2=n-1-i;
            int i3=n-1-i,j3=n-1-j;
            int i4=n-1-j,j4=i;
            int c0=0,c1=0;
            if(a[i1][j1]=='0'){
                c0++; 
            }
            else{
                c1++;
            }
            if(a[i2][j2]=='0'){
                c0++; 
            }
            else{
                c1++;
            }
            if(a[i3][j3]=='0'){
                c0++;
            }
            else{
                c1++;
            }
            if(a[i4][j4]=='0'){
                c0++; 
            }
            else{
                c1++;
            }
            res+=min(c0,c1);
        }
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