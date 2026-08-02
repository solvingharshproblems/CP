#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(is_sorted(a.begin(),a.end())){
        cout<<0<<endl;
        return;
    }
    if(a[n-2]>a[n-1]){
        cout<<-1<<endl;
        return;
    }
    if(a[n-1]<0){
        cout<<-1<<endl;
        return;
    }
    cout<<n-2<<endl;
    for(int i=n-3;i>=0;i--){
        cout<<i+1<<" "<<n-1<<" "<<n<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}