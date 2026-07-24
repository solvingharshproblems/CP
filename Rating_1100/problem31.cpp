#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int> a(51,n+1);
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        if(a[t]==n+1){
            a[t]=i;
        }
    }
    while(q--){
        int t;
        cin>>t;
        int res=a[t];
        for(int i=1;i<=50;i++){
            if(a[i]<res){
                a[i]++;
            }
        }
        a[t]=1;
        cout<<res<<" ";
    }
    cout<<endl;
}