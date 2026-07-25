#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    vector<pair<int,int>> A,B,C;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=0;i<n;i++){
        A.push_back({a[i],i});
    }
    for(int i=0;i<n;i++){
        B.push_back({b[i],i});
    }
    for(int i=0;i<n;i++){
        C.push_back({c[i],i});
    }
    sort(A.rbegin(),A.rend());
    sort(B.rbegin(),B.rend());
    sort(C.rbegin(),C.rend());
    int res=0;
    for(int i=0;i<min(3,n);i++){
        for(int j=0;j<min(3,n);j++){
            for(int k=0;k<min(3,n);k++){
                int x=A[i].second,y=B[j].second,z=C[k].second;
                if(x!=y && y!=z && z!=x){
                    res=max(res,{A[i].first+B[j].first+C[k].first});
                }
            }
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