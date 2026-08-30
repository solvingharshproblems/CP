#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int> diff(n-1);
    for(int i=0;i<n-1;i++){
        diff[i]=a[i+1]-a[i]-1;
    }
    sort(diff.begin(),diff.end());
    int ans=n;
    for(int i=0;i<n-k;i++){
        ans+=diff[i];
    }
    cout<<ans<<endl;
    return 0;
}