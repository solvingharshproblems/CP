#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> x(n+1);
        for(int i=1;i<=n;i++){
            cin>>x[i];
        }
        vector<int> suffix(n+2,0);
        suffix[n]=x[n];
        for(int i=n-1;i>=1;i--){
            suffix[i]=suffix[i+1]+x[i];
        }
        int res=INT64_MAX;
        for(int i=0;i<=n;i++){
            int c=x[i]*(a+b)+(suffix[i+1]-(n-i)*x[i])*b;
            res=min(res,c);
        }
        cout<<res<<endl;
    }
    return 0;
}