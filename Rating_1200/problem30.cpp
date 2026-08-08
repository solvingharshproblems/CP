#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<array<int,2>> edges;
    int x=1,y=-1;
    for(int i=2;i<=n;i++){
        if(a[i]!=a[1]){
            edges.push_back({1,i});
            y=i;
            break;
        }
    }
    if(y==-1){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=2;i<=n;i++){
        if(i==y){
            continue;
        }
        if(a[i]!=a[x]){
            edges.push_back({x,i});
        } 
        else{
            edges.push_back({y,i});
        }
    }
    cout<<"YES"<<endl;
    for(auto &edge:edges){
        cout<<edge[0]<<" "<<edge[1]<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}