#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    bool hasNonZero=false;
    for(auto &x:a){
        cin>>x;
        hasNonZero|=(x!=0);
    }
    if(!hasNonZero){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    vector<int> pos,neg;
    for(auto &x:a){
        if(x>=0){
            pos.push_back(x);
        } 
        else{
            neg.push_back(x);
        }
    }
    vector<int> res(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        if(sum<=0 && !pos.empty()){
            res[i]=pos.back();
            pos.pop_back();
        } 
        else{
            res[i]=neg.back();
            neg.pop_back();
        }
        sum+=res[i];
    }
    for(auto &x:res){
        cout<<x<<' ';
    }
    cout<<endl;
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