#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    int res=INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        res=min(res,abs(x));
    }
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}