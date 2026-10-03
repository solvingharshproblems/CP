#include <bits/stdc++.h>
using namespace std;
const int MAX=1e5+5;
const int Z=30;            
int pref[Z][MAX][2];          
int suff[Z][MAX][2]; 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=0;i<Z;i++){
        suff[i][n+1][0]=suff[i][n+1][1]=0;
    }
    for(int i=0;i<Z;i++){
        for(int j=1;j<=n;j++){
            int t=!!(a[j] & (1<<i));
            for(int k=0;k<2;k++){
                pref[i][j][k]=(t==k)+pref[i][j-1][k^t];
            }
        }
        for(int j=n;j>=1;j--){
            int t=!!(a[j] & (1<<i));
            for(int k=0;k<2;k++){
                suff[i][j][k]=(t==k)+suff[i][j+1][k^t];
            }
        }
    }
    long long res=0;
    for(int i=1;i<=n;i++){
        int z=31-__builtin_clz(a[i]);
        res+=1LL*pref[z][i-1][1]*(1+suff[z][i+1][0]);
        res+=1LL*(1+pref[z][i-1][0])*suff[z][i+1][1];
    }
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}