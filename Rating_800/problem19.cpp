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
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            pos++;
        }
        else{
            neg++;
        }
    }
    int res=0;
    while(pos<neg || neg%2==1){
        res++;
        pos++;
        neg--;
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