#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,m;
    cin>>n>>m;
    vector<vector<long long>> a(n,vector<long long>(m));
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    long long negatives=0,minimum=INT_MAX,sum=0;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            if(a[i][j]<0){
                negatives++;
            }
            minimum=min(minimum,abs(a[i][j]));
            sum+=abs(a[i][j]);
        }
    }
    if(negatives%2==0){
        cout<<sum<<endl;
    } 
    else{
        cout<<sum-2*abs(minimum)<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}