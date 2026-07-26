#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    int m=(n*(n-1))/2;
    vector<int> a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int x=n-1,i=0;
    while(x>0){
        cout<<a[i]<<" ";
        i+=x;
        x--;
    }
    cout<<"1000000000"<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}