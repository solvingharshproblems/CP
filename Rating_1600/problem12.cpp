#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        if(n==x){
            cout<<n<<endl;
            continue;
        }
        long long res=-1;
        for(int i=0;i<=61;i++){
            if(((n>>i)<<i)==x){
                long long m=x | (1LL<<i);
                res=(m>=n)?m:-1;
                break;
            }
        }
        cout<<res<<endl;
    }
}