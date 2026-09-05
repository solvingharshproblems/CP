#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        a[i]={l,r,i};
    }
    sort(a.begin(),a.end());
    vector<int> res(n,2);
    int Max=a[0][1];
    bool split=false;
    for(int i=0;i<n;i++){
        if(a[i][0]>Max){
            split=true;
            break;
        }
        res[a[i][2]]=1;
        Max=max(Max,a[i][1]);
    }
    if(!split){
        cout<<"-1"<<endl;
    } 
    else{
        for(auto v:res){
            cout<<v<<' ';
        }
        cout<<endl;
    }
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