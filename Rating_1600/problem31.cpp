#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n>m){
        cout<<0;
        return 0;
    }
    int res=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            res=(res*abs((a[i]-a[j])%m))%m;
        }
    }
    cout<<res;
    return 0;
}