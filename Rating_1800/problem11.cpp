#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
void solve(){
    int n, q;
    cin>>n>>q;
    vector<int> v(n),SUM(n),XOR(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        SUM[i]=(i?SUM[i-1]:0)+v[i];
        XOR[i]=(i?XOR[i-1]:0)^v[i];
    }
    int res=SUM.back()-XOR.back();
    int l=0,r=n-1;
    while(q--){
        int L,R;
        cin>>L>>R;
        L--,R--;
        if(res==0){
            cout<<1<<' '<<1<<endl;
            return;
        }
        int p1=L,p2=L;
        while(p1<=R && p2<=R){
            int v1=SUM[p2]-(p1?SUM[p1-1]:0);
            int v2=XOR[p2]^(p1?XOR[p1-1]:0);
            int val=v1-v2;
            if(val==res && (p2-p1)<(r-l)){
                r=p2;
                l=p1;
            }
            if(val<res){
                p2++;
            } 
            else{
                p1++;
            }
        }
        cout<<l+1<<' '<<r+1<<endl;
    }
}
signed main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}