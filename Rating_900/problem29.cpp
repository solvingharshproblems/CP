#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=-1,j=-1,k=-1;
    for(int x=1;x<n-1;x++){
        if(a[x]>a[x-1] && a[x]>a[x+1]){
            i=x-1;
            j=x;
            k=x+1;
            break;
        }
    }
    if(i!=-1){
        cout<<"YES"<<endl;
        cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}