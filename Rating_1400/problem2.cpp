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
    int res=0;
    int x=INT_MAX,y=INT_MAX;
    for(int i=0;i<n;i++){
        if(x>y){
            swap(x,y);
        }
        if(a[i]<=x){
            x=a[i];
        } 
        else if(a[i]<=y){
            y=a[i];
        } 
        else{
            x=a[i];
            res++;
        }
    }
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}