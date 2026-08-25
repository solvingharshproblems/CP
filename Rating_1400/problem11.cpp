#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            a[i]+=a[i]%10;
        }
    }
    if(count(a.begin(),a.end(),a[0])==n){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(a[i]%10==0){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        while(a[i]%10!=2){
            a[i]+=a[i]%10;
        }
        a[i]%=20;
    }
    if(count(a.begin(),a.end(),a[0])==n){
        cout<<"YES"<<endl;
        return;
    } 
    else{
        cout<<"NO"<<endl;
    }
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
